using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PegasusAnimatorController : MonoBehaviour
{
    private enum PegasusState
    {
        Begin,
        Intro,
        SkyIdle,
        SkyUp,
        SkyDown,
        Hit,
    }
    private PegasusState state;
    private Animator animator;

    [SerializeField] private Transform CameraRig;

    [SerializeField]
    [Range(0, 40)] private int shakeAmplitude;
    [SerializeField]
    [Range(10,50)]private int shakeTime;//set to 10 for the test
    [SerializeField]
    [Range(10,99)]private int shakeTimeOneTime; // set to 50 for the test
    // Start is called before the first frame update
    void Start()
    {
        state = PegasusState.Begin;
        animator = GetComponent<Animator>(); 
    }

    // Update is called once per frame
    void Update()
    {
        switch (state)
        {

            case PegasusState.Begin:
            break;
            case PegasusState.Intro:
            break;
            case PegasusState.SkyIdle:
            break;
            case PegasusState.Hit:
            break;
        }
    }

    public void ToIntro()
    {
        state = PegasusState.Intro;
        animator.SetTrigger("Intro");
    }
    public void ToSkyIdle()
    {
        state = PegasusState.SkyIdle;
        animator.ResetTrigger("Intro");
        animator.SetTrigger("SkyIdle");
    }
    public void ToHit()
    {
        state = PegasusState.Hit;
        //animator.SetBool("Hit", true);
        UDPPluginScript.instance.shake = shakeAmplitude.ToString() + shakeTimeOneTime.ToString() + "0000" + shakeTime.ToString(); //(shakeAmplitude * 100000000 + shkeTimeOneTime * 1000000 + shakeTime);//Control the chair to shake
    }
    public void RecoverHit()
    {
        state = PegasusState.SkyIdle;
        //animator.SetBool("Hit", false);
        UDPPluginScript.instance.shake = "0000000000";//stop the chair
    }

    // Animation blending
    public void SynVerticalAngle(float VerticalAngleInTheSky)//call this functiuon when the Pegasus go up or down and pass the rotation
    {
        animator.SetFloat("VerticalAngle", VerticalAngleInTheSky);
    }
    public void SynHorizontalAngle(float HorizontalAngleInTheSky)
    {
        animator.SetFloat("HorizontalAngle", HorizontalAngleInTheSky); 
    }
}
