using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// This is a quick and dirty class, don't use it in the final product

[CreateAssetMenu(fileName = "NarratorSounds", menuName = "Player/NarratorSounds", order = 1)]
public class NarratorSounds : ScriptableObject
{
    [Header("Dialogue")]
    [SerializeField] AudioClip[] _dialogueOrder;

    [Header("Event Clips Sounds")]
    [SerializeField] AudioClip[] _landmarkClips;

    public AudioClip PlayDialogue(int count)
    {
        return _dialogueOrder[count % _dialogueOrder.Length]; // bad hard code
    }

    public AudioClip PlayDialogue(string landmark)
    {
        int _landmarkCount = 0;
        if(landmark == "Col")
        {
            // Collosseum
            _landmarkCount = 0;
        } else if(landmark == "Aqua")
        {
            _landmarkCount = 1;
        }
        else if (landmark == "Tower")
        {
            _landmarkCount = 2;
        } else
        {
            throw new System.Exception("Incorrect Landmark Name");
        }
        return _landmarkClips[_landmarkCount]; // if this is out of range, messed up elsewhere
    }

}
