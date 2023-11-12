using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "PegasusSounds", menuName = "Player/PegasusSounds", order = 1)]
public class PegasusSounds : ScriptableObject
{
    [Header("Ambient")]
    [SerializeField] AudioClip[] _ambientSounds;

    [Header("Bad Sounds")]
    [SerializeField] AudioClip[] _badSounds;

    public AudioClip GetAmbient()
    {
        return _ambientSounds[Random.Range(0, _ambientSounds.Length - 1)];
    }

    public AudioClip GetBadSound()
    {
        return _badSounds[Random.Range(0, _badSounds.Length - 1)];
    }
}
