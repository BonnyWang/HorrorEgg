using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System.Net;
using System.Net.Sockets;
using System.Xml;
using System.Xml.Serialization;
using System.IO;
using System;
using UnityEngine.UI;

public class UDPPluginScript : MonoBehaviour
{
    #region singleton
    public static UDPPluginScript instance;
    #endregion
    UdpClient udp;
    IPEndPoint ipep;
    XmlSerializer xmlsl;
    S_Config ProConfig;
    FileStream fs;
    string path;
    public GameObject obj;
    private GameObject referenceObj;
    float initAngle_y;
    float rot = 0;
    //public Slider[] slider = new Slider[3];

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Debug.Log("something wrong");
        }
    }

    // Use this for initialization
    void Start()
    {
        udp = new UdpClient();
        referenceObj = Instantiate(obj, transform);

        ProConfig = new S_Config();
        xmlsl = new XmlSerializer(typeof(S_Config));
        path = Application.dataPath + "//ipconfig.xml";
        if (!File.Exists(path))
        {
            creatConfigXml();
        }
        else
        {
            fs = new FileStream(path, FileMode.Open);
            ProConfig = (S_Config)xmlsl.Deserialize(fs);
        }
        initAngle_y = obj.transform.localEulerAngles.y;
        if (initAngle_y > 180)
            initAngle_y -= 360;
        ipep = new IPEndPoint(IPAddress.Parse(ProConfig.ip), ProConfig.port);
    }

    // Update is called once per frame
    [Tooltip("Turn speed in radians per second")]
    public float maxTurnSpeed = Mathf.PI / 2f;

    // FOR EXTRA SAFETY
    private static Quaternion rotationLastFrame;
    void Update()
    {
        //obj.transform.localEulerAngles = new Vector3(slider[0].value, slider[1].value, slider[2].value);
        referenceObj.transform.rotation = rotationLastFrame;
        Vector3 newForward = Vector3.RotateTowards(referenceObj.transform.forward, obj.transform.forward, maxTurnSpeed * Time.deltaTime, 0);
        Vector3 newUp = Vector3.RotateTowards(referenceObj.transform.up, obj.transform.up, maxTurnSpeed * Time.deltaTime, 0);
        referenceObj.transform.LookAt(referenceObj.transform.position + newForward, newUp);
        rotationLastFrame = referenceObj.transform.rotation;

        string data = setDofData(referenceObj.transform.eulerAngles.x, referenceObj.transform.eulerAngles.z, referenceObj.transform.eulerAngles.y);
        //Debug.Log(data);
        byte[] mData = System.Text.Encoding.Default.GetBytes(data);
        udp.Send(mData, mData.Length, ipep);
    }

    void OnApplicationQuit()
    {
        udp.Close();
    }

    void creatConfigXml()
    {
        fs = new FileStream(path, FileMode.OpenOrCreate);
        ProConfig.ip = "127.0.0.1";
        ProConfig.port = 11000;

        xmlsl.Serialize(fs, ProConfig);
    }

    [SerializeField]
    public int height = 0;
    public string shake;//it need to be aabbeeeeee, aa = 1~40 stands for the height bb = 0~99 stand for the time for a shake time = bb*2*20 ms;eeeeee stand for the last time,eeeeee*100 ms;
    string setDofData(float pitch, float roll, float yaw)
    {
        string data = "x";
        data += string.Format("{0:D5}", 0);
        data += "y";
        data += string.Format("{0:D5}", 0);
        data += "z";
        data += string.Format(height >= 0 ? "{0:D5}" : "{0:D4}", height);//up &down  0~1023
        data += "u";
        if (pitch > 180)
            pitch -= 360;
        int angle_x = (int)(pitch * 30);
        if (angle_x >= 0)
            data += string.Format("{0:D5}", angle_x);
        else
            data += string.Format("{0:D4}", angle_x);
        data += "v";
        if (roll > 180)
            roll -= 360;
        int angle_z = -(int)(roll * 30);
        if (angle_z >= 0)
            data += string.Format("{0:D5}", angle_z);
        else
            data += string.Format("{0:D4}", angle_z);
        data += "w";
        data += string.Format("{0:D5}", 0);
        data += "c";
        int angle_y = (int)totalYaw(yaw) * 100;
        //print(angle_y);
        //int angle_y = (int)(yaw * 30);
        angle_y = -angle_y;
        if (angle_y >= 0)
            data += string.Format("{0:D8}", angle_y);
        else
            data += string.Format("{0:D7}", angle_y);
        data += "t";
        data += string.Format("{0:D12}", 0);
        data += "d";
        data += string.Format("{0:D10}", shake);
        return data;
    }

    float totalYaw(float angle_y)
    {
        float delta;
        if (angle_y > 180)
            angle_y -= 360;
        if (angle_y < -90 && initAngle_y > 90)
        {
            delta = angle_y - initAngle_y + 360;
            rot += delta;
        }
        else if (angle_y > 90 && initAngle_y < -90)
        {
            delta = angle_y - initAngle_y - 360;
            rot += delta;
        }
        else
        {
            delta = angle_y - initAngle_y;
            rot += delta;
        }
        initAngle_y = angle_y;
        return rot;
        //Yaw = (int)rot;
    }
}

[StructLayout(LayoutKind.Sequential)]
public struct S_Config
{
    public string ip;
    public int port;

}
