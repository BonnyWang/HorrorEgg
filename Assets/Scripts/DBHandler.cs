using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;
using UnityEngine.Playables;

public class DBHandler : MonoBehaviour
{
    public static DBHandler instance;
    public DatabaseReference PlayerRef;
    [SerializeField] UDPPluginScript uDPPluginScript;
    [SerializeField] Transform eggChair;
    [SerializeField] float rotateDuration;

    [SerializeField] PlayableDirector scaredDirector;
    [SerializeField] PlayableDirector elevatorDirector;
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

        eggChair.rotation = Quaternion.identity;

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
                scaredDirector.Play();
            }
        
            if(playerInfo.ToBase){
                StartCoroutine(transitToBase());
            }


            if (playerInfo.InElevator)
            {
                    elevatorDirector.Play();
            }



         }
          
        };
    }


    IEnumerator transitToBase(){
        uDPPluginScript.maxTurnSpeed = 2f;
        eggChair.Rotate(0, 180, 0);
        yield return new WaitForSeconds(1.5f);

        eggChair.Rotate(-30,0,0);

        yield return new WaitForSeconds(2f);

        eggChair.Rotate(30,0,0);

    }

    IEnumerator rotate()
    {

        uDPPluginScript.maxTurnSpeed = 0.5f;
        eggChair.Rotate(0, 60, 0);
        yield return new WaitForSeconds(1f);
        uDPPluginScript.maxTurnSpeed = 2f;
        eggChair.Rotate(0, 120f, 0);

    }

    private void OnDestroy()
    {
        eggChair.rotation = Quaternion.identity;
    }

}
