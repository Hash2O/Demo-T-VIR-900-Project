using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class GhostCycleManager : MonoBehaviour
{
    [Header("Points de déplacement")]
    public Transform ghostSpawnPoint;
    public Transform ghostWaitPoint;
    public Transform ghostExitPoint;

    [Header("Gestion des fantômes")]
    public List<GameObject> ghostPrefabs;
    private GhostClient activeGhost;

    [Header("Récompenses")]
    public GameObject coinPrefab;
    public GameObject keyPrefab;
    public Transform coinDeliveryPoint;
    public Transform keyDeliveryPoint;
    public float timeBetweenCoins = 0.5f;
    public float bonusTimeToCheck = 30f;

    [Header("Timers")]
    public float spawnDelay = 2f;
    public float exitDelay = 3f;
    public float timeBeforeVanish = 5f;

    [Tooltip("Temps maximum qu’un fantôme attend sa potion avant de partir (en secondes).")]
    public float maxWaitTime = 60f;

    [Header("Référence au compteur de citrouilles")]
    [SerializeField] private PumpkinCounter pumpkinCounter;

    [Header("Gestion Présence/Absence XR Rig dans la cuisine")]
    public bool isPlayerInside = false; // gère l'absence ou la présence du XR Rig dans la "cuisine"
    public bool isPaused = false;   // gel du timer patience si le joueur sort

    private bool isSpawning = false;
    private float lastRemainingTime = 0f;   // Stockage du temps restant quand le fantôme est satisfait (gestion récompense bonus)

    private void Awake()
    {
        pumpkinCounter = FindFirstObjectByType<PumpkinCounter>();
    }

    private void Start()
    {
        StartCoroutine(GhostCycleLoop());
    }

    private IEnumerator GhostCycleLoop()
    {
        while (true)
        {
            // Tant que le joueur n’est PAS dans la zone → pause
            while (!isPlayerInside)
                yield return null;

            // Tant qu’on est en pause, SpawnGhost n’est pas lancé.
            if (!isSpawning && activeGhost == null)
            {
                yield return StartCoroutine(SpawnGhost());
            }

            yield return null;
        }
    }

    private IEnumerator SpawnGhost()
    {
        isSpawning = true;
        yield return new WaitForSeconds(spawnDelay);

        // Spawn du fantôme
        GameObject prefab = ghostPrefabs[Random.Range(0, ghostPrefabs.Count)];
        GameObject ghostObj = Instantiate(prefab, ghostSpawnPoint.position, Quaternion.identity);
        activeGhost = ghostObj.GetComponent<GhostClient>();

        NavMeshAgent agent = ghostObj.GetComponent<NavMeshAgent>();

        // Aller au comptoir
        if (agent != null)
            agent.SetDestination(ghostWaitPoint.position);

        // Son d’alerte
        if(AudioManager.audioInstance != null)
            AudioManager.audioInstance.PlayTheGoodSound(1);

        // Attente que le fantôme arrive au point de patience
        yield return StartCoroutine(WaitForGhostToReach(agent, ghostWaitPoint.position));

        // Lancer le timer de patience
        bool potionDelivered = false;
        yield return StartCoroutine(GhostWaitTimer(() => potionDelivered = activeGhost.isSatisfied));

        // Si la potion a été donnée à temps
        if (activeGhost.isSatisfied)
        {
            yield return StartCoroutine(GiveReward());
            if (pumpkinCounter != null)
            {
                pumpkinCounter.RegisterSatisfiedClient();
            }
        }
        else
        {
            Debug.Log("Le fantôme est parti frustré (pas de potion à temps).");
            if (pumpkinCounter != null)
            {
                pumpkinCounter.RegisterUnsatisfiedClient();
            }
        }

        // Départ du fantôme
        if (agent != null)
            agent.SetDestination(ghostExitPoint.position);

        yield return new WaitForSeconds(exitDelay);
        yield return new WaitForSeconds(timeBeforeVanish);

        Destroy(ghostObj);
        activeGhost = null;
        isSpawning = false;
    }

    /// <summary>
    /// Attend que le fantôme soit proche de son point d’attente.
    /// </summary>
    private IEnumerator WaitForGhostToReach(NavMeshAgent agent, Vector3 target)
    {
        if (agent == null)
            yield break;

        while (Vector3.Distance(agent.transform.position, target) > agent.stoppingDistance + 0.2f)
        {
            Debug.Log("Distance : " + Vector3.Distance(agent.transform.position, target));
            yield return null;
        }
    }

    private IEnumerator GhostWaitTimer(System.Func<bool> isSatisfiedCheck)
    {
        float timer = 0f;

        // Active la barre au début
        if (activeGhost.patienceBar != null)
            activeGhost.patienceBar.SetVisible(true);

        while (timer < maxWaitTime)
        {
            // Si la potion est donnée : on stoppe tout immédiatement
            if (isSatisfiedCheck())
            {
                // Capturer le temps restant pour déterminer si récompense bonus (voir GiveReward())
                lastRemainingTime = maxWaitTime - timer;

                if (activeGhost.patienceBar != null)
                    activeGhost.patienceBar.SetVisible(false);
                yield break;
            }

            // PAUSE : tant que le joueur est hors de la zone
            while (isPaused)
            {
                // On gèle tout : pas d’incrément du timer, pas de changement de fill
                yield return null;
            }

            // Mise à jour de la barre (pendant que le timer avance)
            if (activeGhost.patienceBar != null)
            {
                float remainingPercent = 1f - (timer / maxWaitTime);
                activeGhost.patienceBar.SetFill(remainingPercent);
            }

            // Le timer n’avance que lorsque la zone est active
            timer += Time.deltaTime;
            yield return null;
        }

        // Timer écoulé : cacher la barre
        if (activeGhost.patienceBar != null)
            activeGhost.patienceBar.SetVisible(false);

        Debug.Log("Temps écoulé ! Le fantôme part sans potion.");
    }


    private IEnumerator GiveReward()
    {
        if (coinPrefab == null || coinDeliveryPoint == null)
            yield break;

        int coinCount = Random.Range(1, 4); // 1 à 3 pièces de base
        int bonusCoins = Mathf.FloorToInt(lastRemainingTime / bonusTimeToCheck);    // Bonus si livraison rapide

        if(AudioManager.audioInstance != null)
            AudioManager.audioInstance.PlayTheGoodSound(11);    // Fairy Cartoon Success Voice

        coinCount += bonusCoins;    // calcul du nombre de pièces données par le client fantôme satisfait

        if (AudioManager.audioInstance != null)
            AudioManager.audioInstance.PlayTheGoodSound(0); // Cashing Sound

        for (int i = 0; i < coinCount; i++)
        {
            Instantiate(coinPrefab, coinDeliveryPoint.position, Quaternion.identity);
            yield return new WaitForSeconds(timeBetweenCoins);
        }

        int randomKey = Random.Range(1, 11);

        if (randomKey < 4)
            Instantiate(keyPrefab, keyDeliveryPoint.position, Quaternion.identity);

        Debug.Log($"{coinCount} pièce(s) récompensent la sorcière !");
    }
}

/// <summary>
/// Timer d’attente du fantôme : si le timer expire avant qu’il soit satisfait → il part.
/// </summary>
//private IEnumerator GhostWaitTimer(System.Func<bool> isSatisfiedCheck)
//{
//    float timer = 0f;

//    Debug.Log("Ghost Wait Timer"); 

//    // Active la barre au début
//    if (activeGhost.patienceBar != null)
//    {
//        Debug.Log("patienceBar.SetVisible(true)");
//        activeGhost.patienceBar.SetVisible(true);
//    }


//    while (timer < maxWaitTime)
//    {
//        if (isSatisfiedCheck())
//        {
//            // Potion reçue → cacher la barre
//            if (activeGhost.patienceBar != null)
//                activeGhost.patienceBar.SetVisible(false);

//            yield break;
//        }

//        // Remplit la barre visuelle
//        if (activeGhost.patienceBar != null)
//        {
//            float remainingPercent = 1f - (timer / maxWaitTime);
//            activeGhost.patienceBar.SetFill(remainingPercent);
//        }

//        timer += Time.deltaTime;
//        Debug.Log("Timer : " + timer);
//        yield return null;
//    }

//    // Timer écoulé → cacher la barre
//    if (activeGhost.patienceBar != null)
//    {
//        Debug.Log("patienceBar.SetVisible(false)");
//        activeGhost.patienceBar.SetVisible(false);
//    }

//    Debug.Log("Temps écoulé ! Le fantôme part sans potion.");
//}
