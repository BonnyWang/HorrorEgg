using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class chairTest : MonoBehaviour {

    // Use this for initialization
    Animation animation;
	void Start ()
    {
        animation = this.GetComponent<Animation>();

    }
	
	// Update is called once per frame
	void Update ()
    {
       
        if (Input.GetKey(KeyCode.F1))
        {
            if (!animation.IsPlaying("RotLR"))
            {
                animation.Play("RotLR");
            }
        }
        if (Input.GetKey(KeyCode.F2))
        {
            if (!animation.IsPlaying("RotFB"))
            {
                animation.Play("RotFB");
            }
        }
        if (Input.GetKey(KeyCode.F3))
        {
            this.transform.Rotate(0, -2, 0);
        }
        if (Input.GetKey(KeyCode.F4))
        {
            this.transform.Rotate(0, 2, 0);
        }
    }
}
