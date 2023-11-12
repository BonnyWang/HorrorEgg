using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// this still derives from monobehaviour because im lazy
public class HeadControl : MonoBehaviour, IPlayerInput
{
    [Header("Player's head tilt controls the chair")]
    [SerializeField] private float maxHeadsetRotation = 40f;
    [SerializeField] [Range(0.1f, 1f)] private float rotAccel = 0.4f;
    [SerializeField] [Range(0f, 30f)] private float minZMove = 10f;

    [SerializeField] GameObject chairRef, playerCam;

    // Initialization
    void Awake()
    {
        if (playerCam == null) throw new System.Exception(this.name + ": Player Camera is not set up");
        chairRef = GameObject.FindGameObjectWithTag("Chair");
        if (chairRef == null) throw new System.Exception(this.name + ": Chair is not set up");
    }

    // CallUpdate is managed by the PlayerControl class
    public void CallUpdate()
    {
        // Generate our chair's rotation from the camera's rotation
        Vector3 cameraRot = GetCameraTilt();
        //print("Camera rot " + cameraRot);

        // Set the chair to our input head rotation. 
        // This also "rotates" the player's camera in the real world, so we have to account for the chair's rotations too, so we apply the inverse
        var toQuat = Quaternion.Inverse(chairRef.transform.rotation) * Quaternion.Euler(cameraRot);
        chairRef.transform.rotation = Quaternion.Slerp(chairRef.transform.rotation, toQuat, rotAccel); // slerp smooths it out

        // update camera rig y
        this.transform.forward = Quaternion.Euler(0f, 15.0f * chairRef.transform.rotation.z, 0f) * this.transform.forward;
    }

    private Vector3 GetCameraTilt()
    {
        // Get local rotation to correctly map distance
        Vector3 camRotation = playerCam.transform.localRotation.eulerAngles;
        camRotation = new Vector3(
            camRotation.x >= 180 ? (camRotation.x - 360f) : camRotation.x,
            camRotation.y >= 180 ? (camRotation.y - 360f) : camRotation.y,
            camRotation.z >= 180 ? (camRotation.z - 360f) : camRotation.z
        );

        Debug.Log("camRotation = " + camRotation);

        // Generate a Euler rotation vector based off of the camera's position from the Camera Rig's center, relative to its forward vector
        // The chair does not rotate Y based on head movement, so ignore it here.
        return new Vector3(
            Mathf.Clamp(camRotation.x, -maxHeadsetRotation, maxHeadsetRotation),
            camRotation.y, //Mathf.Clamp(camRotation.y, -maxHeadsetRotation, maxHeadsetRotation),
            -Mathf.Clamp(camRotation.z, -maxHeadsetRotation, maxHeadsetRotation)
            );
    }
}
