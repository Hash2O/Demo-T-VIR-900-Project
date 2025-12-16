using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomAmbientMusic : MonoBehaviour
{
    [SerializeField] private List<AudioClip> ambientMusic = new List<AudioClip>();
    [SerializeField] private float timeMin, timeMax;
    [SerializeField] private AudioSource audioSource;

    void Start()
    {
        audioSource = this.GetComponent<AudioSource>();
        StartCoroutine(PlayRandomAmbientMusic());
    }

    IEnumerator PlayRandomAmbientMusic()
    {
        int i = Random.Range(0, ambientMusic.Count);
        yield return new WaitForSeconds(Random.Range(timeMin, timeMax) +  audioSource.clip.length);
        audioSource.clip = ambientMusic[i];
        audioSource.Play();
        StartCoroutine(PlayRandomAmbientMusic());
    }
}
