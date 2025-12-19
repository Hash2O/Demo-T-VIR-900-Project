using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class InGameUIManager : MonoBehaviour
{

    [SerializeField] private List<Canvas> inGameUICanvas;

    [SerializeField] private PlayableDirector director;

    private bool isInGameUIActive;
    private bool isNarrativeStoryActive;


    private void Start()
    {
        isInGameUIActive = true;
        isNarrativeStoryActive = true;

        ToggleInGameUI();
    }
    public void ToggleInGameUI()
    {
        if (isInGameUIActive == true) 
        {
            foreach (var item in inGameUICanvas)
            {
                 item.gameObject.SetActive(false);
            }
            isInGameUIActive = false;
        }
        else
        {
            foreach (var item in inGameUICanvas)
            {
                item.gameObject.SetActive(true);
            }
            isInGameUIActive = true;
        }
    }

    public void ToggleNarrativeStory()
    {
        if (isNarrativeStoryActive == true)
        {
            director.gameObject.SetActive(false);
            isNarrativeStoryActive = false;
        }
        else if (isNarrativeStoryActive == false)
        {
            director.gameObject.SetActive(true);
            isNarrativeStoryActive = true;
        }
    }
}
