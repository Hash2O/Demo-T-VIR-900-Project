//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using UnityEngine.AI;

//public class GhostCycleManager : MonoBehaviour
//{
//    [Header("Points de déplacement")]
//    public Transform ghostSpawnPoint;
//    public Transform ghostWaitPoint;
//    public Transform ghostExitPoint;

//    [Header("Gestion des fantômes")]
//    public List<GameObject> ghostPrefabs; // différents types de fantômes
//    private GhostClient activeGhost;

//    [Header("Récompenses")]
//    public GameObject coinPrefab;
//    public Transform coinDeliveryPoint; // où tombent les pièces
//    public float timeBetweenCoins = 0.5f;

//    [Header("Paramètres")]
//    public float spawnDelay = 2f;
//    public float exitDelay = 3f;
//    public float timeBeforeVanish = 5f;

//    private bool isSpawning = false;

//    private void Start()
//    {
//        StartCoroutine(GhostCycleLoop());
//    }

//    private IEnumerator GhostCycleLoop()
//    {
//        while (true)
//        {
//            if (!isSpawning && activeGhost == null)
//            {
//                yield return StartCoroutine(SpawnGhost());
//            }
//            yield return null;
//        }
//    }

//    private IEnumerator SpawnGhost()
//    {
//        isSpawning = true;

//        yield return new WaitForSeconds(spawnDelay);

//        // Choisit un type de fantôme aléatoire
//        GameObject prefab = ghostPrefabs[Random.Range(0, ghostPrefabs.Count)];
//        GameObject ghostObj = Instantiate(prefab, ghostSpawnPoint.position, Quaternion.identity);
//        activeGhost = ghostObj.GetComponent<GhostClient>();

//        // Déplace le fantôme vers le comptoir
//        NavMeshAgent agent = ghostObj.GetComponent<NavMeshAgent>();
//        if (agent != null)
//        {
//            agent.SetDestination(ghostWaitPoint.position);
//        }

//        // Signale un nouveau client fantôme en approche
//        AudioManager.audioInstance.PlayTheGoodSound(1); // Plays Metal Gear Solid alert sound !

//        // Attend que le fantôme soit satisfait
//        yield return new WaitUntil(() => activeGhost.isSatisfied);

//        // Lance la séquence de récompense
//        yield return StartCoroutine(GiveReward());

//        // Délai avant le départ
//        yield return new WaitForSeconds(exitDelay);

//        // Déplacement vers la sortie
//        if (agent != null)
//            agent.SetDestination(ghostExitPoint.position);

//        // Attend que le fantôme soit assez loin pour le désactiver
//        yield return new WaitForSeconds(timeBeforeVanish);
//        Destroy(ghostObj);  // Implémenter un système de pool pour désactiver chaque fantôme au lieu de le détruire
//        activeGhost = null;

//        isSpawning = false;
//    }

//    private IEnumerator GiveReward()
//    {
//        if (coinPrefab == null || coinDeliveryPoint == null)
//            yield break;

//        int coinCount = Random.Range(1, 4);

//        // Singleton
//        AudioManager.audioInstance.PlayTheGoodSound(0); // Plays cashing sound !

//        for (int i = 0; i < coinCount; i++)
//        {
//            Instantiate(coinPrefab, coinDeliveryPoint.position, Quaternion.identity);
//            yield return new WaitForSeconds(timeBetweenCoins);
//        }

//        Debug.Log($"{coinCount} pièce(s) récompensent la sorcière !");
//    }
//}

//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using UnityEngine.AI;

//public class GhostCycleManager : MonoBehaviour
//{
//    [Header("Points de déplacement")]
//    public Transform ghostSpawnPoint;
//    public Transform ghostWaitPoint;
//    public Transform ghostExitPoint;

//    [Header("Gestion des fantômes")]
//    public List<GameObject> ghostPrefabs;
//    private GhostClient activeGhost;

//    [Header("Récompenses")]
//    public GameObject coinPrefab;
//    public Transform coinDeliveryPoint;
//    public float timeBetweenCoins = 0.5f;

//    [Header("Timers")]
//    public float spawnDelay = 2f;
//    public float exitDelay = 3f;
//    public float timeBeforeVanish = 5f;

//    [Tooltip("Temps maximum qu’un fantôme attend sa potion avant de partir (en secondes).")]
//    public float maxWaitTime = 60f;

//    private bool isSpawning = false;

//    private void Start()
//    {
//        StartCoroutine(GhostCycleLoop());
//    }

//    private IEnumerator GhostCycleLoop()
//    {
//        while (true)
//        {
//            if (!isSpawning && activeGhost == null)
//            {
//                yield return StartCoroutine(SpawnGhost());
//            }
//            yield return null;
//        }
//    }

//    private IEnumerator SpawnGhost()
//    {
//        isSpawning = true;
//        yield return new WaitForSeconds(spawnDelay);

//        // Spawn du fantôme
//        GameObject prefab = ghostPrefabs[Random.Range(0, ghostPrefabs.Count)];
//        GameObject ghostObj = Instantiate(prefab, ghostSpawnPoint.position, Quaternion.identity);
//        activeGhost = ghostObj.GetComponent<GhostClient>();

//        NavMeshAgent agent = ghostObj.GetComponent<NavMeshAgent>();

//        // Aller au comptoir
//        if (agent != null)
//            agent.SetDestination(ghostWaitPoint.position);

//        // Son d’alerte
//        if(AudioManager.audioInstance != null)
//            AudioManager.audioInstance.PlayTheGoodSound(1);

//        // ➜ Attente que le fantôme arrive au point de patience
//        yield return StartCoroutine(WaitForGhostToReach(agent, ghostWaitPoint.position));  

//        // ➜ Lancer le timer de patience
//        bool potionDelivered = false;
//        yield return StartCoroutine(GhostWaitTimer(() => potionDelivered = activeGhost.isSatisfied));

//        // Si la potion a été donnée à temps
//        if (activeGhost.isSatisfied)
//        {
//            yield return StartCoroutine(GiveReward());
//        }
//        else
//        {
//            Debug.Log("⏳ Le fantôme est parti frustré (pas de potion à temps).");
//        }

//        // Départ du fantôme
//        if (agent != null)
//            agent.SetDestination(ghostExitPoint.position);

//        yield return new WaitForSeconds(exitDelay);
//        yield return new WaitForSeconds(timeBeforeVanish);

//        Destroy(ghostObj);
//        activeGhost = null;
//        isSpawning = false;
//    }

//    /// <summary>
//    /// Attend que le fantôme soit proche de son point d’attente.
//    /// </summary>
//    private IEnumerator WaitForGhostToReach(NavMeshAgent agent, Vector3 target)
//    {
//        Debug.Log("WaitForGhostToReach");

//        if (agent == null)
//            yield break;

//        while (Vector3.Distance(agent.transform.position, target) > agent.stoppingDistance + 0.1f)
//        {
//            Debug.Log("Distance : " + Vector3.Distance(agent.transform.position, target));
//            yield return null;
//        }

//    }

//    /// <summary>
//    /// Timer d’attente du fantôme : si le timer expire avant qu’il soit satisfait → il part.
//    /// </summary>
//    //private IEnumerator GhostWaitTimer(System.Func<bool> isSatisfiedCheck)
//    //{
//    //    float timer = 0f;

//    //    while (timer < maxWaitTime)
//    //    {
//    //        if (isSatisfiedCheck())
//    //            yield break; // Potion livrée à temps !

//    //        timer += Time.deltaTime;
//    //        yield return null;
//    //    }

//    //    // Si on arrive ici → temps écoulé
//    //    Debug.Log("⏰ Temps écoulé ! Le fantôme part sans potion.");
//    //}

//    private IEnumerator GhostWaitTimer(System.Func<bool> isSatisfiedCheck)
//    {
//        float timer = 0f;

//        // Active la barre au début
//        if (activeGhost.patienceBar != null)
//        {
//            Debug.Log("Patience Bar activated");
//            activeGhost.patienceBar.SetVisible(true);
//        }


//        while (timer < maxWaitTime)
//        {
//            if (isSatisfiedCheck())
//            {
//                // Potion reçue → cacher la barre
//                if (activeGhost.patienceBar != null)
//                    activeGhost.patienceBar.SetVisible(false);

//                yield break;
//            }

//            // Remplit la barre visuelle
//            if (activeGhost.patienceBar != null)
//            {
//                Debug.Log("Remplissage de la barre de patience");
//                float remainingPercent = 1f - (timer / maxWaitTime);
//                activeGhost.patienceBar.SetFill(remainingPercent);
//            }

//            timer += Time.deltaTime;
//            Debug.Log("Timer : " + timer);
//            yield return null;
//        }

//        // Timer écoulé → cacher la barre
//        if (activeGhost.patienceBar != null)
//            activeGhost.patienceBar.SetVisible(false);

//        Debug.Log("⏰ Temps écoulé ! Le fantôme part sans potion.");
//    }


//    private IEnumerator GiveReward()
//    {
//        if (coinPrefab == null || coinDeliveryPoint == null)
//            yield break;

//        int coinCount = Random.Range(1, 4);

//        AudioManager.audioInstance.PlayTheGoodSound(0);

//        for (int i = 0; i < coinCount; i++)
//        {
//            Instantiate(coinPrefab, coinDeliveryPoint.position, Quaternion.identity);
//            yield return new WaitForSeconds(timeBetweenCoins);
//        }

//        Debug.Log($"{coinCount} pièce(s) récompensent la sorcière !");
//    }
//}

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
    public Transform coinDeliveryPoint;
    public float timeBetweenCoins = 0.5f;

    [Header("Timers")]
    public float spawnDelay = 2f;
    public float exitDelay = 3f;
    public float timeBeforeVanish = 5f;

    [Tooltip("Temps maximum qu’un fantôme attend sa potion avant de partir (en secondes).")]
    public float maxWaitTime = 60f;

    [Header("Référence au compteur de citrouilles")]
    [SerializeField] private PumpkinCounter pumpkinCounter;

    private bool isSpawning = false;

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

        // ➜ Attente que le fantôme arrive au point de patience
        yield return StartCoroutine(WaitForGhostToReach(agent, ghostWaitPoint.position));

        // ➜ Lancer le timer de patience
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
            Debug.Log("⏳ Le fantôme est parti frustré (pas de potion à temps).");
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

    /// <summary>
    /// Timer d’attente du fantôme : si le timer expire avant qu’il soit satisfait → il part.
    /// </summary>
    //private IEnumerator GhostWaitTimer(System.Func<bool> isSatisfiedCheck)
    //{
    //    float timer = 0f;

    //    while (timer < maxWaitTime)
    //    {
    //        if (isSatisfiedCheck())
    //            yield break; // Potion livrée à temps !

    //        timer += Time.deltaTime;
    //        yield return null;
    //    }

    //    // Si on arrive ici → temps écoulé
    //    Debug.Log("⏰ Temps écoulé ! Le fantôme part sans potion.");
    //}

    private IEnumerator GhostWaitTimer(System.Func<bool> isSatisfiedCheck)
    {
        float timer = 0f;

        Debug.Log("Ghost Wait Timer"); 

        // Active la barre au début
        if (activeGhost.patienceBar != null)
        {
            Debug.Log("patienceBar.SetVisible(true)");
            activeGhost.patienceBar.SetVisible(true);
        }
            

        while (timer < maxWaitTime)
        {
            if (isSatisfiedCheck())
            {
                // Potion reçue → cacher la barre
                if (activeGhost.patienceBar != null)
                    activeGhost.patienceBar.SetVisible(false);

                yield break;
            }

            // Remplit la barre visuelle
            if (activeGhost.patienceBar != null)
            {
                float remainingPercent = 1f - (timer / maxWaitTime);
                activeGhost.patienceBar.SetFill(remainingPercent);
            }

            timer += Time.deltaTime;
            Debug.Log("Timer : " + timer);
            yield return null;
        }

        // Timer écoulé → cacher la barre
        if (activeGhost.patienceBar != null)
        {
            Debug.Log("patienceBar.SetVisible(false)");
            activeGhost.patienceBar.SetVisible(false);
        }

        Debug.Log("⏰ Temps écoulé ! Le fantôme part sans potion.");
    }

    private IEnumerator GiveReward()
    {
        if (coinPrefab == null || coinDeliveryPoint == null)
            yield break;

        int coinCount = Random.Range(1, 4);

        AudioManager.audioInstance.PlayTheGoodSound(0);

        for (int i = 0; i < coinCount; i++)
        {
            Instantiate(coinPrefab, coinDeliveryPoint.position, Quaternion.identity);
            yield return new WaitForSeconds(timeBetweenCoins);
        }

        Debug.Log($"{coinCount} pièce(s) récompensent la sorcière !");
    }
}
