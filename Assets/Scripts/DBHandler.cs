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
            if (playerInfo.Scared)
            {
                uDPPluginScript.shake = 4003000050.ToString();
                StartCoroutine(reset());
            }
            else
            {

                if (playerInfo.InElevator)
                {
                    uDPPluginScript.shake = 2003000050.ToString();
                }
                else
                {
                    uDPPluginScript.shake = 0003000051.ToString();
                }
            }



         }
          
        };
    }


    IEnumerator reset()
    {
        yield return new WaitForSeconds(0.5f);
        uDPPluginScript.shake = 0003000051.ToString();

    }


    
}
