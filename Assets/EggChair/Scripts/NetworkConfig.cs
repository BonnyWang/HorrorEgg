using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using System.Text;
using UnityEngine.Networking;
//{"isServer":true,"serverAddr":"localhost","serverPort":2222}

public class NetworkConfig : MonoBehaviour
{
    // Start is called before the first frame update
    #region singleton
    public static NetworkConfig instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Debug.Log("NetworkConfig : Singleton Failure");
        }
    }
    #endregion    
    public ServerNetworkConfig config = new ServerNetworkConfig();
    public string configPath = "network.json";

    private bool saveConfig = false;
    void Start()
    {
        
    }

    // Update is called once per frame

    public void LoadConfig()
    {
        if (!File.Exists(configPath))
            return;

        // TODO: Use async operation for IO
        string configText = File.ReadAllText(configPath, Encoding.UTF8);
        try
        {
            config = JsonUtility.FromJson<ServerNetworkConfig>(configText);
        }
        catch (Exception e)
        {
            Debug.LogError("Config read failed: " + e.Message);
        }
    }
    [Serializable]
    public class ServerNetworkConfig
    {
        public bool iserver = true;
        public string serverAddr = "localhost";
        public int serverport = 2222;
    }
}
