using UnityEngine;

public class BellManager : MonoBehaviour
{
    [SerializeField] private GhostCycleManager ghostManager;
    [SerializeField] private ParticleSystem startNotificationVFX;

    public bool isBellActivated = false;

    private void OnCollisionEnter(Collision collision)
    {
        if(AudioManager.audioInstance != null)
            AudioManager.audioInstance.PlayTheGoodSound(7);     // Bell ringing
        Debug.Log("Ring my bell !");

        if(isBellActivated == false)
        {
            Debug.Log("Les clients fantômes sont invités à venir passer commande !");
            isBellActivated = true;
            startNotificationVFX.Play();
            GameCycleManager.Instance.StartNight();
            ghostManager.gameObject.SetActive(true);
        }
    }
}
