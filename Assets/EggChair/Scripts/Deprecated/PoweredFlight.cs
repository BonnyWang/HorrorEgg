using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoweredFlight : MonoBehaviour
{

    [Range(0f, 1f)] float constVelocityForward = 0.0f;
    [SerializeField] float airSpeed = 18f;

    public Transform refCamera;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var ourDir = refCamera.transform.forward;
        // this is the powered flight directional vector representation of our change to forward vec in z
        Debug.DrawLine(Vector3.zero, 5.0f * ourDir, Color.cyan);

        this.transform.Translate(ourDir.normalized * airSpeed * Time.deltaTime);
    }
}
