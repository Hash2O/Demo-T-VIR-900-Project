using UnityEngine;
using System.Collections.Generic;

public class PumpkinCounter : MonoBehaviour
{
    [Header("Liste des citrouilles (dans l'ordre)")]
    public List<GameObject> pumpkins = new List<GameObject>();

    [Header("Debug")]
    public int satisfiedClients = 0;

    // Appelée par GhostClient lorsqu'un fantôme est satisfait
    public void RegisterSatisfiedClient()
    {
        // Trouver la première citrouille inactive
        foreach (GameObject pumpkin in pumpkins)
        {
            if (!pumpkin.activeSelf)
            {
                pumpkin.SetActive(true);
                satisfiedClients++;

                // Audio 
                if(AudioManager.audioInstance != null)
                    AudioManager.audioInstance.PlayTheGoodSound(5); // Success Notification

                Debug.Log($"Citrouille activée ! Total : {satisfiedClients}");

                CheckForVictory();
                return;
            }
        }

        Debug.Log("Toutes les citrouilles sont déjà activées (clients supplémentaires ?)");
    }

    public void ActivatePumpkins()
    {
        // Trouver la première citrouille inactive
        foreach (GameObject pumpkin in pumpkins)
        {
            if (!pumpkin.activeSelf)
            {
                pumpkin.SetActive(true);

                // Audio 
                if (AudioManager.audioInstance != null)
                    AudioManager.audioInstance.PlayTheGoodSound(5); // Success Notification

                Debug.Log($"Citrouille activée ! Total : {satisfiedClients}");

                //CheckForVictory();
                return;
            }
        }

        Debug.Log("Toutes les citrouilles sont déjà activées (clients supplémentaires ?)");
    }

    // Appelée lorsqu'un fantôme repart frustré
    public void RegisterUnsatisfiedClient()
    {
        // On ne descend pas en-dessous de zéro
        if (satisfiedClients <= 0)
        {
            Debug.Log("Aucune citrouille à retirer.");
            return;
        }

        // Trouver la dernière citrouille active
        for (int i = pumpkins.Count - 1; i >= 0; i--)
        {
            if (pumpkins[i].activeSelf)
            {
                pumpkins[i].SetActive(false);
                satisfiedClients--;

                // Audio échec
                if (AudioManager.audioInstance != null)
                    AudioManager.audioInstance.PlayTheGoodSound(8); // Horror lose

                Debug.Log($"Citrouille désactivée... Total : {satisfiedClients}");
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
