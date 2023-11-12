using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInfo
{
    public bool Scared;
    public static PlayerInfo CreateFromJSON(string jsonString){
        return JsonUtility.FromJson<PlayerInfo>(jsonString);
    }
}
