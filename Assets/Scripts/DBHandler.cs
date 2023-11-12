using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;

public class DBHandler : MonoBehaviour
{
    public static DBHandler instance;
    public DatabaseReference PlayerRef;
    [SerializeField] UDPPluginScript uDPPluginScript;
    void Start()
    {
        if (instance == null)
        {
            instance = this;
        }else
        {
            Destroy(this);
        }

        initialization();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void initialization(){
        PlayerRef = FirebaseDatabase.DefaultInstance.GetReference("Player");
        StartListener(transform);

    }

    void StartListener(Transform transform) {
        PlayerRef.ValueChanged += (object sender2, ValueChangedEventArgs e2) => {
          if (e2.DatabaseError != null) {
            Debug.LogError(e2.DatabaseError.Message);
            return;
          }
          if (e2.Snapshot != null && e2.Snapshot.ChildrenCount > 0) {
            PlayerInfo playerInfo = PlayerInfo.CreateFromJSON(e2.Snapshot.Child("instance").GetRawJsonValue());
            Debug.Log(playerInfo.Scared);
            if(playerInfo.Scared){
                uDPPluginScript.shake = 4003000050.ToString();
            }else{
                uDPPluginScript.shake = 1003000051.ToString();
            }
          }
          
        };
    }
}
