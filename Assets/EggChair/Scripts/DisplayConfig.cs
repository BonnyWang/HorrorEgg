using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayConfig : MonoBehaviour
{
    #region singleton
    public static DisplayConfig instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Debug.Log("NetworkConfig : Singleton Failure");
        }
    }
    #endregion    
    public void ActiveCamera()
    {
        if (Display.displays.Length > 1)
        {
            Display.displays[1].Activate();
        }
        if (Display.displays.Length > 2)
        {
            Display.displays[2].Activate();
        }
    }
}
