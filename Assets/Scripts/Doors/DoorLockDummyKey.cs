using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Interactables;

public class DoorLockDummyKey : MonoBehaviour
{
    [Header("Références")]
    [SerializeField] private HingeJoint doorHinge;
    [SerializeField] private XRBaseInteractable doorHandle;   // XR Grab de la poignée (optionnel)
    [SerializeField] private GameObject dummyKey;             // Clé visuelle déjà dans la serrure (désactivée au départ)

    [Header("Clé requise")]
    [SerializeField] private string requiredKeyTag = "";  // Tag de la vraie clé

    [Header("Options")]
    [SerializeField] private bool lockHandleWhenLocked = false;

    private bool isUnlocked = false;
    private JointLimits lockedLimits;
    private JointLimits unlockedLimits;
    private bool hingeConfigInitialized = false;

    private bool hingeInitialUseSpring;
    private JointSpring hingeInitialSpring;

    private void Awake()
    {
        if (doorHinge != null)
        {
            unlockedLimits = doorHinge.limits;
            lockedLimits = doorHinge.limits;
            lockedLimits.min = -0.1f;
            lockedLimits.max = 0.1f;
            hingeConfigInitialized = true;

            hingeInitialUseSpring = doorHinge.useSpring;
            hingeInitialSpring = doorHinge.spring;
        }

        if (dummyKey != null)
            dummyKey.SetActive(false);
    }

    private void OnEnable()
    {
        LockDoor();
    }

    private void LockDoor()
    {
        isUnlocked = false;

        if (doorHinge != null && hingeConfigInitialized)
        {
            doorHinge.limits = lockedLimits;
            doorHinge.useLimits = true;
            doorHinge.useSpring = false;
        }

        if (lockHandleWhenLocked && doorHandle != null)
            doorHandle.enabled = false;
    }

    private void UnlockDoor()
    {
        isUnlocked = true;

        if (doorHinge != null && hingeConfigInitialized)
        {
            doorHinge.limits = unlockedLimits;
            doorHinge.useLimits = true;

            doorHinge.useSpring = hingeInitialUseSpring;
            if (hingeInitialUseSpring)
                doorHinge.spring = hingeInitialSpring;
        }

        if (doorHandle != null)
            doorHandle.enabled = true;

        if (AudioManager.audioInstance != null) AudioManager.audioInstance.PlayItemSound(0);    // Door key in door lock
    }

    private void OnTriggerEnter(Collider other)
    {
        if (isUnlocked)
            return;

        // Vérifie la bonne clé
        if (!other.CompareTag(requiredKeyTag))
            return;

        // Récupère éventuellement XRGrab + Rigidbody pour la vraie clé
        var keyGO = other.attachedRigidbody != null
            ? other.attachedRigidbody.gameObject
            : other.gameObject;

        var grab = keyGO.GetComponent<XRGrabInteractable>();
        var rb = keyGO.GetComponent<Rigidbody>();

        // On "consomme" la vraie clé
        if (grab != null)
            grab.enabled = false;

        if (rb != null)
        {
            rb.isKinematic = true;
            rb.linearVelocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
        }

        // Soit on la masque, soit on la téléporte ailleurs
        keyGO.SetActive(false);

        // On affiche la fausse clé déjà bien positionnée dans la serrure
        if (dummyKey != null)
            dummyKey.SetActive(true);

        // Déverrouillage de la porte
        UnlockDoor();
    }
}

