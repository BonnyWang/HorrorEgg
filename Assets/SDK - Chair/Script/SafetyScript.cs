using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SafetyScript : MonoBehaviour
{
    private Quaternion startRotation;
    [SerializeField] private float timer = 0.0f;
    [SerializeField] bool ignoreYLock = false, forceStop = false;
    private float tempYRot;
    [SerializeField] private float totalTimer = 999.0f; // the total time the safety function protects against sudden initial jerks

    // Start is called before the first frame update
    void Awake()
    {
        startRotation = this.transform.rotation;
        Debug.Log("Safety engaged");
    }

    // To-Do: move rotation locks in here e.g. "chair's refCube cannot move furhter than 40 degrees forward"
    // This code is "incorrect" because we technicaly can't guarantee it will run after other rotation modifications
    // if we put stuff in LateUpdate elsewhere.  Should make a state machine that handles update loops
    void LateUpdate()
    {
        // Engage safety script only in the first [totalTimer] seconds of runtime
        //Debug.Log("engage safety timer if " + timer + " < " + totalTimer);
        if (timer < totalTimer && !forceStop)
        {
            if (ignoreYLock) tempYRot = transform.rotation.eulerAngles.y;

            // Scale our gradual rotation to prevent jerking
            transform.rotation = Quaternion.Slerp(startRotation, transform.rotation, (timer / totalTimer));

            if (ignoreYLock) transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, tempYRot, transform.rotation.eulerAngles.z);

            timer += Time.deltaTime;
        }
        else // we are done being safe
        {
            // Disengage safety script
            Debug.Log("Safety disengaged");
            Destroy(this.GetComponent<SafetyScript>());
        }

    }

    // This command ends safety in 1 second
    public void EndSafety()
    {
        timer = totalTimer - 2f;
    }
}
