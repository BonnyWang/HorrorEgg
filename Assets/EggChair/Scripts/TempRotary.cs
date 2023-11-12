using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Uduino;

public class TempRotary : MonoBehaviour
{
    UduinoManager u;
    public float readValueL = 0;
    public float readValueLnot = 0;
    public float RotateVelocityL;
    public float readValueR = 0;
    public float readValueRnot = 0;
    public float RotateVelocityR;
    public float RotateVelocityTotal;
    int test = 0;
    void Start()
    {
        UduinoManager.Instance.pinMode(AnalogPin.A0, PinMode.Input);
        readValueLnot = 1024; //UduinoManager.Instance.analogRead(AnalogPin.A0, "PinRead");
        readValueRnot = 1024; //UduinoManager.Instance.analogRead(AnalogPin.A0, "PinRead");
    }
    void Update()
    {
        this.transform.Translate(Vector3.forward * Time.deltaTime * 10);
        ReadRotEncoder();
    }
    void ReadRotEncoder()
    {
        readValueL = UduinoManager.Instance.analogRead(AnalogPin.A0, "PinRead");
        RotateVelocityL = (1023 - readValueL);
        // this.transform.Rotate(new Vector3(0, -RotateVelocityL, 0));
        readValueR = UduinoManager.Instance.analogRead(AnalogPin.A1, "PinRead");
        RotateVelocityR = (readValueR - 2.5f);
        // this.transform.Rotate(new Vector3(0, RotateVelocityR, 0));
        RotateVelocityTotal = (RotateVelocityR - RotateVelocityL);
        // RotateVelocityTotal = RotateVelocityR / 50;
        // RotateVelocityTotal = - (1023 - RotateVelocityL) / 50;
        this.transform.Rotate(new Vector3(0, RotateVelocityTotal, 0));
        //test = UduinoManager.Instance.analogRead(AnalogPin.A1, "PinRead");
        //lightSouce2.intensity = test / 200.0f;
        UduinoManager.Instance.SendBundle("PinRead");
    }
}