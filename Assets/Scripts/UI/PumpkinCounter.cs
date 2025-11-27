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
                    AudioManager.audioInstance.PlayTheGoodSound(5); // Success notification

                Debug.Log($"Citrouille activée ! Total : {satisfiedClients}");

                CheckForVictory();
                return;
            }
        }

        Debug.Log("Toutes les citrouilles sont déjà activées (clients supplémentaires ?)");
    }

    public void RegisterAngryClient()
    {
        // Trouver la première citrouille inactive
        foreach (GameObject pumpkin in pumpkins)
        {
            if (pumpkin.activeSelf)
            {
                pumpkin.SetActive(false);
                satisfiedClients--;

                // Audio 
                if (AudioManager.audioInstance != null)
                    AudioManager.audioInstance.PlayTheGoodSound(5); // Success notification

                Debug.Log($"Citrouille désactivée ! Total : {satisfiedClients}");
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

