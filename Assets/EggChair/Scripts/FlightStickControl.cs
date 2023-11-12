using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// this still derives from monobehaviour because im lazy
public class FlightStickControl : MonoBehaviour, IPlayerInput
{
    [Header("Player's head tilt controls the pitch and slightly the roll")]
    [SerializeField] private float maxHeadsetDist = 3f;
    [SerializeField] private float maxPitchAngle = 40f, maxRollAngle = 40f, rotMult = 2.8f; // To-Do: move these also to safetyScript
    [SerializeField] [Range(0.1f, 1f)] private float rotAccel = 0.001f; // To-Do: move these also to safetyScript

    [SerializeField] GameObject chairRef, playerCam;

    // Initialization
    void Awake()
    {
        if (playerCam == null) throw new System.Exception(this.name + ": Player Camera is not set up");
        chairRef = GameObject.FindGameObjectWithTag("Chair");
        if (chairRef == null) throw new System.Exception(this.name + ": Chair is not set up");
    }

    float rotation = 10f;

    // CallUpdate is managed by the PlayerControl class
    public void CallUpdate()
    {
        // Generate our chair's rotation from the camera's position based on our SteamVR Playspace's center
        Vector3 cameraRot = GetControlStickInput();
        //print("Camera rot " + cameraRot);

        // Set the chair to our input head rotation. 
        // This also "rotates" the player's camera in the real world, effectively rotating it in VR without any code.
        var toQuat = Quaternion.Euler(cameraRot);
        chairRef.transform.rotation = Quaternion.Slerp(chairRef.transform.rotation, toQuat, rotAccel); // slerp smooths it out

        // To-Do: y axis rotation may end up being controlled entirely by reins
        this.transform.forward = Quaternion.Euler(0f, rotMult * chairRef.transform.rotation.z, 0f) * this.transform.forward;
    }

    private Vector3 GetControlStickInput()
    {
        // Get local position to correctly map distance
        float horizontal = Input.GetAxis("JoystickPitch");
        float vertical = Input.GetAxis("JoystickRoll");

        Debug.Log("Numbers = " + horizontal + " and " + vertical);

        // Generate a Euler rotation vector based off of the camera's position from the Camera Rig's center, relative to its forward vector
        // The chair does not rotate Y based on head movement, so ignore it here.
        return new Vector3(
            0.0f,//maxRollAngle * rotMult * vertical * 0.8f,
            0.0f,
            maxPitchAngle * rotMult * horizontal * 0.8f
            );
    }

    // Unused for now, maybe useful later
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
