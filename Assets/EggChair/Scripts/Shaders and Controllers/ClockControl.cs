using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClockControl : MonoBehaviour
{
    [SerializeField]
    UnityEngine.UI.Image[] timers;

    // inValue goes from 0 to 1
    public void SetTime(float inValue, bool hurry)
    {
        // im too dumb to make this generic, hard coded for time
        /*//timers[0].fillAmount = inValue;
        int curTimerRing = (int) (inValue * (float)timers.Length);
        Debug.Log("UI Val: " + curTimerRing);
        var length = timers.Length;
        for (int i = 0; i < length; i++)
        {
            if (i < curTimerRing) timers[i].fillAmount = 1.0f;
            else if (i == curTimerRing) timers[i].fillAmount = 0.5f;
            else timers[i].fillAmount = 0.0f;
        }*/

        // this is bad and hard coded
        if(inValue >= 0.66f)
        {
            timers[0].fillAmount = map(inValue, 0.66f, 1.0f, 0.0f, 1.0f);
            timers[1].fillAmount = 1.0f;
            timers[2].fillAmount = 1.0f;
        } else if (inValue >= 0.33f)
        {
            timers[0].fillAmount = 0.0f;
            timers[1].fillAmount = map(inValue, 0.33f, 0.66f, 0.0f, 1.0f);
            timers[2].fillAmount = 1.0f;
        } else if(inValue > 0.0f)
        {
            timers[0].fillAmount = 0.0f;
            timers[1].fillAmount = 0.0f;
            timers[2].fillAmount = map(inValue, 0.0f, 0.33f, 0.0f, 1.0f);
        } else
        {
            this.transform.localScale = Vector3.one; hurry = false;
            timers[0].fillAmount = 0.0f;
            timers[1].fillAmount = 0.0f;
            timers[2].fillAmount = 0.0f;
        }

        // If we are near the end, make the timer jump around
        if (hurry)
        {
            var scaleFactor = 0.007f * (Mathf.Sin(Time.time * 3f));
            //Debug.Log(this.transform.localScale + " and " + scaleFactor);
            this.transform.localScale += scaleFactor * Vector3.one;
        }
    }

    float map(float x, float in_min, float in_max, float out_min, float out_max)
    {
        return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
    }
}
