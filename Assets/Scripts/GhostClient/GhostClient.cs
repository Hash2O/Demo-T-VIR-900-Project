using UnityEngine;
using System.Collections;

public class GhostClient : MonoBehaviour
{
    public RecipeData requestedRecipe;

    public PatienceBar patienceBar;

    public bool isSatisfied { get; private set; }

    [Header("Référence vers le comptoir")]
    [SerializeField] private PotionDeliveryCounter deliveryCounter;

    [Header("Apparence")]
    public Renderer ghostRenderer;
    public float colorChangeSpeed = 4f;

    private bool hasCheckedPotion = false;

    private void Start()
    {
        deliveryCounter = FindFirstObjectByType<PotionDeliveryCounter>();
    }

    private void Update()
    {
        // Le fantôme vérifie la potion une seule fois lorsqu'il attend
        if (!hasCheckedPotion && deliveryCounter != null)
        {
            PotionBottle bottle = deliveryCounter.GetCurrentBottle();

            if (bottle != null)
            {
                hasCheckedPotion = true;
                StartCoroutine(ReceivePotion(3, bottle));

                // On peut détruire la bouteille après "lecture"
                Destroy(bottle.gameObject, 3f);
            }
        }
    }

    public IEnumerator ReceivePotion(int time, PotionBottle bottle)
    {
        if (bottle == null || bottle.GetContainedRecipe() == null)
        {
            Debug.Log("Le client reçoit une fiole vide !");
            yield return null;
        }

        RecipeData received = bottle.GetContainedRecipe();

        if (received == requestedRecipe)
        {
            yield return new WaitForSeconds(time);
            Debug.Log($"Le client est ravi ! Potion correcte : {received.recipeName}");
            isSatisfied = true;

            StartCoroutine(ChangeGhostColor(received.potionColor));
        }
        else
        {
            yield return new WaitForSeconds(time);
            Debug.Log($"Mauvaise potion : {received.recipeName} au lieu de {requestedRecipe.recipeName}");
            isSatisfied = false;
            StartCoroutine(ChangeGhostColor(Color.grey));
        }
    }

    private IEnumerator ChangeGhostColor(Color targetColor)
    {
        if (ghostRenderer == null)
            yield break;

        Material mat = ghostRenderer.material;
        Color startColor = mat.color;
        float t = 0f;

        while (t < 1f)
        {
            t += Time.deltaTime * colorChangeSpeed;
            mat.color = Color.Lerp(startColor, targetColor, t);
            yield return null;
        }
    }
}

//public void ReceivePotion(PotionBottle bottle)
//{
//    if (bottle == null || bottle.GetContainedRecipe() == null)
//    {
//        Debug.Log("Le client reçoit une fiole vide !");
//        return;
//    }

//    RecipeData received = bottle.GetContainedRecipe();

//    if (received == requestedRecipe)
//    {
//        Debug.Log($"Le client est ravi ! Potion correcte : {received.recipeName}");
//        isSatisfied = true;
//        StartCoroutine(ChangeGhostColor(received.potionColor));
//    }
//    else
//    {
//        Debug.Log($"Mauvaise potion : {received.recipeName} au lieu de {requestedRecipe.recipeName}");
//        isSatisfied = false;
//        StartCoroutine(ChangeGhostColor(Color.grey));
//    }
//}