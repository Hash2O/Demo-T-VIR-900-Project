using UnityEngine;

using UnityEngine.XR.Interaction.Toolkit.Interactables;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(XRGrabInteractable))]
public class ShakeDetector : MonoBehaviour
{
    public float shakeAccelerationThreshold = 20f;   // � ajuster
    public float minShakeInterval = 0.3f;            // anti-spam
    public float minHoldTime = 0.1f;                 // temps mini tenu avant de d�tecter

    private Rigidbody rb;
    private XRGrabInteractable grab;
    private Vector3 lastVelocity;
    private float lastShakeTime;
    private float grabbedTime;

    private AudioSource audioSource;

    void Awake()
    {
        rb = GetComponent<Rigidbody>();
        grab = GetComponent<XRGrabInteractable>();

        grab.selectEntered.AddListener(_ => OnGrabbed());
        grab.selectExited.AddListener(_ => OnReleased());

        audioSource = GetComponent<AudioSource>();
    }

    void OnDestroy()
    {
        grab.selectEntered.RemoveListener(_ => OnGrabbed());
        grab.selectExited.RemoveListener(_ => OnReleased());
    }

    void OnGrabbed()
    {
        grabbedTime = Time.time;
        lastVelocity = rb.linearVelocity;
    }

    void OnReleased()
    {
        grabbedTime = 0f;
    }

    void FixedUpdate()
    {
        if (!grab.isSelected) return; // seulement quand l�objet est tenu

        Vector3 currentVelocity = rb.linearVelocity;
        Vector3 accel = (currentVelocity - lastVelocity) / Time.fixedDeltaTime;
        lastVelocity = currentVelocity;

        float accelMagnitude = accel.magnitude;

        if (Time.time - grabbedTime >= minHoldTime &&
            accelMagnitude >= shakeAccelerationThreshold &&
            Time.time >= lastShakeTime + minShakeInterval)
        {
            lastShakeTime = Time.time;
            OnShaken(accel, accelMagnitude);
        }
    }

    void OnShaken(Vector3 accel, float strength)
    {
        Debug.Log($"Shaken! accel={accel} strength={strength}");
        // TODO : d�clencher ton effet (particules, son, etc.)
        if(strength > 100f) audioSource.Play();
    }
}

