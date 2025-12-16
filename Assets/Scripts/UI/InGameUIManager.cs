using System.Collections.Generic;
using UnityEngine;

public class InGameUIManager : MonoBehaviour
{

    [SerializeField] private List<Canvas> inGameUICanvas;
    public bool isInGameUIActive;


    private void Start()
    {
        isInGameUIActive = true;
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
}
