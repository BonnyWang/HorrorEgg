using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInfo
{
    public bool Scared;
    public bool ToBase;
    public bool InElevator;
    public float RX;
    public float RY;
    public float RZ;
    public int Shake;
    public int Height;

    public static PlayerInfo CreateFromJSON(string jsonString){
        return JsonUtility.FromJson<PlayerInfo>(jsonString);
    }
}
