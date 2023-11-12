using UnityEngine;

public class Horse : MonoBehaviour
{

    public GameObject chairRef;

    public UDPPluginScript tempSeatDirectAcces;

    public float trotSpeed;
    [Range(1f, 15f)] public float angleRange = 20.0f;
    [Range(0f, 1f)] public float offset = 0.5f;


    private float privTrotSpeed = 0, phase = 0.0f;


    // Start is called before the first frame update
    void Start()
    {
        privTrotSpeed = trotSpeed;
    }

    float timer = 2.0f;

    // Update is called once per frame
    void Update()
    {
        timer -= Time.deltaTime;
        if(timer <= 0 && trotSpeed < 9f)
        {
            trotSpeed += 3f;
            timer = 2.0f;
        }

        if (trotSpeed != privTrotSpeed) privTrotSpeed += 0.5f * (trotSpeed - privTrotSpeed);

        // Draw forward
        Debug.DrawRay(this.transform.position, 6f * this.transform.forward, Color.red);


        // Bucking backwards
        phase = phase + privTrotSpeed * Time.deltaTime;
        var rotXAxis = (angleRange / 1 + offset) * (Mathf.Sin(phase) + offset);

        chairRef.transform.rotation = Quaternion.AngleAxis(rotXAxis,-1f * chairRef.transform.right);


        // Minor side to side rotation
        var rotZAxis = (0.5f * Mathf.Sin(privTrotSpeed * 0.9f * Time.time));
        chairRef.transform.rotation *= Quaternion.AngleAxis(rotZAxis, chairRef.transform.forward);


        // Height bob
        //chairRef.transform.position = new Vector3(0.0f, Mathf.Sin(trotSpeed * Time.time), 0.0f);
        tempSeatDirectAcces.height = (int) (250f * Mathf.Sin(trotSpeed * Time.time));

        this.transform.Translate(0.25f * this.transform.forward);
    }
}
