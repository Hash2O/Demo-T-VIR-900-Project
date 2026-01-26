using UnityEngine;
using System.Collections.Generic;
using DG.Tweening;

public class PumpkinCounter : MonoBehaviour
{
    [Header("Liste des citrouilles (dans l'ordre)")]
    public List<GameObject> pumpkins = new List<GameObject>();

    [Header("Debug")]
    public int satisfiedClients = 0;

    // Appel�e par GhostClient lorsqu'un fant�me est satisfait
    public void RegisterSatisfiedClient()
    {
        // Trouver la premi�re citrouille inactive
        foreach (GameObject pumpkin in pumpkins)
        {
            if (!pumpkin.activeSelf)
            {
                pumpkin.SetActive(true);
                satisfiedClients++;

                // Audio 
                if(AudioManager.audioInstance != null)
                    AudioManager.audioInstance.PlayTheGoodSound(5); // Success Notification

                Debug.Log($"Citrouille activ�e ! Total : {satisfiedClients}");

                CheckForVictory();
                return;
            }
        }

        Debug.Log("Toutes les citrouilles sont d�j� activ�es (clients suppl�mentaires ?)");
    }

    public void ActivatePumpkins()
    {
        // Trouver la premi�re citrouille inactive
        foreach (GameObject pumpkin in pumpkins)
        {
            if (!pumpkin.activeSelf)
            {
                Vector3 pumpkinSize = pumpkin.transform.localScale;
                pumpkin.transform.DOScale(0.0f,.0f);
                
                pumpkin.SetActive(true);
                pumpkin.transform.DOScale(pumpkinSize, 2.0f);

                // Audio 
                if (AudioManager.audioInstance != null)
                    AudioManager.audioInstance.PlayTheGoodSound(5); // Success Notification

                Debug.Log($"Citrouille activ�e ! Total : {satisfiedClients}");

                //CheckForVictory();
                return;
            }
        }

        Debug.Log("Toutes les citrouilles sont d�j� activ�es (clients suppl�mentaires ?)");
    }

    // Appel�e lorsqu'un fant�me repart frustr�
    public void RegisterUnsatisfiedClient()
    {
        // On ne descend pas en-dessous de z�ro
        if (satisfiedClients <= 0)
        {
            Debug.Log("Aucune citrouille � retirer.");
            return;
        }

        // Trouver la derni�re citrouille active
        for (int i = pumpkins.Count - 1; i >= 0; i--)
        {
            if (pumpkins[i].activeSelf)
            {
                pumpkins[i].SetActive(false);
                satisfiedClients--;

                // Audio �chec
                if (AudioManager.audioInstance != null)
                    AudioManager.audioInstance.PlayTheGoodSound(8); // Horror lose

                Debug.Log($"Citrouille d�sactiv�e... Total : {satisfiedClients}");
                return;
            }
        }
    }

    private void CheckForVictory()
    {
        if (satisfiedClients >= pumpkins.Count)
        {
            Debug.Log("VICTOIRE ! Tous les clients sont satisfaits !");
            // Ajouter ici : animation, son, popup, fin du niveau, etc...
        }
    }
}
