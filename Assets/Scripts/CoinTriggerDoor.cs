using UnityEngine;
using UnityEngine.Events;

public class CoinTriggerDoor : MonoBehaviour
{
    [Header("Réglages")]
    public string coinTag = "Coin";     // Tag des objets à détecter
    public int requiredCoins = 3;       // Nombre d'objets nécessaires

    [Header("Référence porte")]
    public Animator doorAnimator;       // Animator de la porte (optionnel)
    public string openTriggerName = "Open"; // Nom du trigger dans l'Animator
    public AudioSource doorAudioSource;

    [Header("Event personnalisé")]
    public UnityEvent onConditionMet;   // Event à appeler quand la condition est remplie

    private int currentCoinsInTrigger = 0;
    private bool doorOpened = false;

    private void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag(coinTag)) return;

        currentCoinsInTrigger++;
        Destroy(other.gameObject, 0.5f);

        Debug.Log("Pièces dans la tirelire : " + currentCoinsInTrigger);

        CheckCondition();
    }

    private void OnTriggerExit(Collider other)
    {
        if (!other.CompareTag(coinTag)) return;

        currentCoinsInTrigger--;
        if (currentCoinsInTrigger < 0) currentCoinsInTrigger = 0;
    }

    private void CheckCondition()
    {
        if (doorOpened) return;

        if (currentCoinsInTrigger >= requiredCoins)
        {
            doorOpened = true;

            // 1) Event générique (pratique dans l’inspector)
            onConditionMet?.Invoke();

            // 2) Optionnel : ouverture de porte via Animator
            if (doorAnimator != null && !string.IsNullOrEmpty(openTriggerName))
            {
                doorAnimator.SetTrigger(openTriggerName);
                if (AudioManager.audioInstance != null) AudioManager.audioInstance.PlayTheGoodSound(6); // Scary wooden door opening
            }

            // Si tu veux que le trigger ne serve qu'une fois :
            // GetComponent<Collider>().enabled = false;
        }
    }
}

