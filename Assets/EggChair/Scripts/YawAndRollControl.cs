using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// this still derives from monobehaviour because im lazy
public class YawAndRollControl : MonoBehaviour, IPlayerInput
{
    [Header("Player's reins control the yaw and slightly the roll")]
    [SerializeField] bool usingReins = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public void CallUpdate()
    {
        // temp code
        //this.transform.Rotate(new Vector3(0f, 15f * Time.deltaTime, 0f), Space.Self);
    }
}
