using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Pegasus", menuName = "Player/Pegasus", order = 1)]
public class Pegasus : ScriptableObject
{
    [Header("Movement")]
    [SerializeField] public float minVelocity;
    [SerializeField] public float maxVelocity;
    [SerializeField] public float initVelocity = 4.0f;
    [SerializeField] public float airAcceleration;
    [Tooltip("This multiplies our acceleration if we are diving.")]
    [SerializeField] [Range(0f, 5f)] public float downGravityScale;
    [Tooltip("This multiplies our acceleration if we are rising.")]
    [SerializeField] [Range(0f, 5f)] public float upGravityScale;
    [Tooltip("This scales our movement direction to be less or more in sync with the chair's world Pos")]
    [SerializeField] [Range(0f, 1f)] public float inertialScale = 0.0f;

    [Header("Boundaries")]
    [Tooltip("The Pegasus cannot go below this value.")]
    [SerializeField] public float minimumYValue;
    [Tooltip("The Pegasus is bounded by this squared radius from {0,0,0}.")]
    [SerializeField] public float boundaryRadiusSqr = 500f * 500f;

    // Values to pass around
    [HideInInspector] public float CurVelocity {
        get { return curVelocity; }
        set { if (!braking) curVelocity = Mathf.Clamp(value, minVelocity, maxVelocity);
              else curVelocity = Mathf.Clamp(value, 0.0f, maxVelocity);
        }
    }
    [SerializeField] private float curVelocity;
    public bool braking = false;

    // Start is called before the first frame update
    void Awake()
    {
        curVelocity = initVelocity;
        braking = false;
    }
}
