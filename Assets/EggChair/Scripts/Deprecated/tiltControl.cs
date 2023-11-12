using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tiltControl : MonoBehaviour
{
    [SerializeField] private float maxHeadsetDist = 3f, maxXAngle = 40f, maxZAngle = 40f, rotMult = 2.8f;

    [SerializeField] GameObject cubeRef, playerCam;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        Vector3 cameraRot = GetCameraRotation();
        print("Camera at " + cameraRot);

        cubeRef.transform.rotation = Quaternion.Euler(cameraRot);

        // rotate the forward vectors by X amount to simulate turning, but NOT the cubes
        this.transform.forward = Quaternion.Euler(0f, rotMult * cubeRef.transform.rotation.z, 0f) * this.transform.forward;
        // this is the cylinder representation of the forward vector
        cubeRef.transform.GetChild(0).forward = Quaternion.Euler(0f, rotMult * cubeRef.transform.rotation.z, 0f) * cubeRef.transform.GetChild(0).forward;
    }

    private Vector3 GetCameraRotation()
    {
        //Vector3 centerToCamera = playerCam.transform.position - this.transform.position;
        Vector3 centerToCamera = playerCam.transform.localPosition - Vector3.zero;

        Debug.DrawRay(Vector3.zero, 5f * centerToCamera, Color.green);
        Debug.DrawRay(Vector3.zero, 5f * this.transform.forward, Color.blue);
        Debug.DrawRay(Vector3.zero, 5f * Vector3.up, Color.red);

        // Fix this up later to include y maybe
        return new Vector3(
            maxZAngle * rotMult * Mathf.Clamp(centerToCamera.z, -maxHeadsetDist, maxHeadsetDist),
            0.0f,
            maxXAngle * rotMult * Mathf.Clamp(centerToCamera.x, -maxHeadsetDist, maxHeadsetDist)
            );
    }

    private Vector3 GetCameraOffset()
    {
        // Fix this up later to include y maybe
        Vector3 centerToCamera = playerCam.transform.position - this.transform.position;
        return new Vector3(
            Mathf.Clamp(centerToCamera.x, -maxHeadsetDist, maxHeadsetDist),
            Mathf.Clamp(centerToCamera.y, -maxHeadsetDist, maxHeadsetDist),
            Mathf.Clamp(centerToCamera.z, -maxHeadsetDist, maxHeadsetDist)
            );
    }
}
