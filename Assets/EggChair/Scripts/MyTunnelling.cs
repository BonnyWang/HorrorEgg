using UnityEngine;
using System.Collections;

[RequireComponent(typeof(Camera))]
public class MyTunnelling : MonoBehaviour
{
    #region Public Fields
    [Tooltip("Remove for plain black effect.")]
    public Cubemap skybox;

    [Header("Effect Settings")]
    /// <summary>
    /// Screen coverage at max angular velocity.
    /// </summary>
    [Range(0f, 2f)]
    [Tooltip("Screen coverage at max angular velocity.\n(1-this) is radius of visible area at max effect (screen space).")]
    public float maxEffect = 0.75f;

    /// <summary>
    /// Feather around cut-off as fraction of screen.
    /// </summary>
    [Range(0f, 0.5f)]
    [Tooltip("Feather around cut-off as fraction of screen.")]
    public float feather = 0.1f;

    /// <summary>
    /// Smooth out radius over time. 0 for no smoothing.
    /// </summary>
    [Tooltip("Smooth out tunnelling radius over time. 0 for no smoothing.")]
    public float tunnelSmoothTime = 0.15f;
    #endregion

    #region Smoothing
    private float _tunnelSmooth;
    private float _tunnel = 2.0f;
    private float _banking;
    private float _tintSmooth;
    private float _tintOn;
    #endregion

    #region Shader property IDs
    private int _propTunnel;
    private int _propFeather;
    private int _propBanking;
    private int _propTintIntensity;
    #endregion

    #region Eye matrices
    Matrix4x4[] _eyeToWorld = new Matrix4x4[2];
    Matrix4x4[] _eyeProjection = new Matrix4x4[2];
    #endregion

    #region Misc Fields
    private Material _m;
    private Camera _cam;
    private Transform _refTransform;
    #endregion

    #region Methods
    void Awake()
    {
        // set up shader info
        _m = new Material(Shader.Find("Hidden/MyTunnelling"));

        _propTunnel = Shader.PropertyToID("_Tunnel"); // Standard vignetting
        _propBanking = Shader.PropertyToID("_Banking"); // Dynamic left and right vignetting on sharp turns
        _propFeather = Shader.PropertyToID("_Feather"); // Feathered edges of vignette
        _propTintIntensity = Shader.PropertyToID("_TintIntensity"); // Feathered edges of vignette


        _cam = GetComponent<Camera>(); // VR Camera
        _refTransform = transform.parent; // VR Camera Rig
    }

    [Range(0, 2f)]
    public float Tunnel = 2.0f;
    [Range(-1f, 1f)]
    public float Banking = 0.0f;
    [Range(0, 1f)]
    public float TintOn = 0.0f;

    [Header("This script controls collisions and relative vignetting.")]
    public float proximity;

    // should this even be a spherecast or just a collider
    // Update is called once per frame
    void Update()
    {
        /*RaycastHit leftPoint, rightPoint;

        var toDrawAt = this.transform.position;

        Debug.DrawRay(toDrawAt, 10f * Vector3.left, Color.blue);
        Debug.DrawRay(toDrawAt, 10f * Vector3.right, Color.red);


        bool leftHit = Physics.Raycast(transform.position, 10f * Vector3.left, out leftPoint, 10f);
        bool rightHit = Physics.Raycast(transform.position, 10f * Vector3.right, out rightPoint, 10f);

        if (leftHit && rightHit)
        {
            var leftDist = (leftPoint.point - this.transform.position).sqrMagnitude;
            var rightDist = (rightPoint.point - this.transform.position).sqrMagnitude;

            if (leftDist < rightDist) proximity = -leftDist;
            else proximity = rightDist;
        }
        else if (leftHit)
        {
            var leftDist = (leftPoint.point - this.transform.position).sqrMagnitude;
            proximity = -leftDist;
        }
        else if (rightHit)
        {
            var rightDist = (rightPoint.point - this.transform.position).sqrMagnitude;
            proximity = rightDist;
        }
        else
        {
            proximity = 99f;
        }

        if (proximity != 99f)
        {
            Debug.Log("Proximity = " + proximity);
            Banking = proximity / 10f;
        }
        else
        {
            Debug.Log("Nothing nearby" + _banking);
            Banking = 0.0f;
        }
        */

        //Tunnel = Mathf.Clamp01(Tunnel) * maxEffect;

        _tunnel = Mathf.SmoothDamp(_tunnel, Tunnel, ref _tunnelSmooth, tunnelSmoothTime);

        //_tintOn = TintOn;
        _tintOn = Mathf.SmoothDamp(_tintOn, TintOn, ref _tintSmooth, tunnelSmoothTime);

        _banking = Banking; //Mathf.Sin(Time.time); //Mathf.SmoothDamp(_banking, Banking, ref _tunnelSmooth, 0.01f);

        _m.SetFloat(_propTunnel, _tunnel);
        _m.SetFloat(_propFeather, feather);
        _m.SetFloat(_propBanking, _banking);
        _m.SetFloat(_propTintIntensity, _tintOn);
    }

    void OnPreRender()
    {
        // Update eye matrices
        Matrix4x4 local;
        #if UNITY_2017_2_OR_NEWER
        if (UnityEngine.XR.XRSettings.enabled)
        {
        #else
		if (UnityEngine.VR.VRSettings.enabled) {
        #endif
            local = _cam.transform.parent.worldToLocalMatrix;
        }
        else
        {
            local = Matrix4x4.identity;
        }

        _eyeProjection[0] = _cam.GetStereoProjectionMatrix(Camera.StereoscopicEye.Left);
        _eyeProjection[1] = _cam.GetStereoProjectionMatrix(Camera.StereoscopicEye.Right);
        _eyeProjection[0] = GL.GetGPUProjectionMatrix(_eyeProjection[0], true).inverse;
        _eyeProjection[1] = GL.GetGPUProjectionMatrix(_eyeProjection[1], true).inverse;

        _eyeProjection[0][1, 1] *= -1f;
        _eyeProjection[1][1, 1] *= -1f;

        // Hard-code far clip range
        _eyeProjection[0][3, 3] = 0.001f;
        _eyeProjection[1][3, 3] = 0.001f;

        _eyeToWorld[0] = _cam.GetStereoViewMatrix(Camera.StereoscopicEye.Left);
        _eyeToWorld[1] = _cam.GetStereoViewMatrix(Camera.StereoscopicEye.Right);

        _eyeToWorld[0] = local * _eyeToWorld[0].inverse;
        _eyeToWorld[1] = local * _eyeToWorld[1].inverse;

        _m.SetMatrixArray("_EyeProjection", _eyeProjection);
        _m.SetMatrixArray("_EyeToWorld", _eyeToWorld);

        // Update skybox
        if (skybox)
        {
            _m.SetTexture("_Skybox", skybox);
            _m.EnableKeyword("TUNNEL_SKYBOX");
        }
        else
        {
            _m.DisableKeyword("TUNNEL_SKYBOX");
        }
    }

    void OnRenderImage(RenderTexture src, RenderTexture dest)
    {
        Graphics.Blit(src, dest, _m);
    }

    void OnDestroy()
    {
        Destroy(_m);
    }
    #endregion
}