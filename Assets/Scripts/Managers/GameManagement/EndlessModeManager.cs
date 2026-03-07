using System.Collections;
using UnityEngine;
using UnityEngine.PlayerLoop;
using UnityEngine.Rendering;

public class EndlessModeManager : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    public float modeDurationInMinutes;
    private float modeDurationInSeconds;
    public float bonusTimeInSeconds;
    
    public float elapsedTime;
    public Transform clockPointer;
    public float degres;

    private bool timeOut, timeUp, endSounPlaying;

    public AudioManager audioManager;
    public GhostCycleManager ghostCycleManager;
    void Start()
    {
        elapsedTime = 0f;
        modeDurationInSeconds = modeDurationInMinutes * 60;
        degres = 360/modeDurationInSeconds;
    }

    // Update is called once per frame
    void Update()
    {
        if(!timeOut && timeUp)
        {
            elapsedTime += Time.deltaTime;

            if (elapsedTime > modeDurationInSeconds)
            {
                Debug.Log("Time out!");
                TimeOut();
            } //délai de 6 secondes pour la cloche pour avoir un "ticking" de prévention avant la fin
            else if (elapsedTime > modeDurationInSeconds -6.5f && !endSounPlaying)
            {
                EndSound();
            }
        }
    }

    public void AddBonusTime()
    {
        modeDurationInSeconds += bonusTimeInSeconds;
        audioManager.PlayTheGoodSound(12);
    }

    public void StartCountdown()
    {
        timeUp = true;
        StartCoroutine(SecondPointerMovement());
    }

    private void EndSound()
    {  
        audioManager.PlayTheGoodSound(13);
        endSounPlaying = true;
    }
    private IEnumerator SecondPointerMovement()
    {
        while(!timeOut && timeUp)
         {
            yield return new WaitForSeconds(1.0f);
            clockPointer.Rotate(0f, 0f, degres);
         }
    }

    private void TimeOut()
    {      
        timeOut = true;
        if(ghostCycleManager != null)
            ghostCycleManager.endlessModeTimeOut = timeOut;
    }
}
