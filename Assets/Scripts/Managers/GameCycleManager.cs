using UnityEngine;

//Responsabilités:
//    gérer le jour courant(int currentDay 0–6)
//    gérer l’état Day/Night
//    déterminer le nombre de fantômes requis
//    activer/désactiver le GhostCycleManager
//    notifier la fin de nuit
//    déclencher l’apparition des clés

public enum TimeOfDay
{
    Day,
    Night
}

public class GameCycleManager : MonoBehaviour
{
    public static GameCycleManager Instance;

    [Header("Semaine")]
    public int currentDay = 0; // 0 = Lundi
    public int maxDays = 7;

    [Header("Etat actuel")]
    public TimeOfDay currentTimeOfDay = TimeOfDay.Day;

    [Header("Référence")]
    public GhostCycleManager ghostCycleManager;
    public Light directionalLight;

    [Header("Objectifs")]
    public int baseGhostsFirstNight = 5;

    private int ghostsRequiredThisNight;
    public BellInteraction bell;

    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        StartDay();
    }

    public void StartDay()
    {
        currentTimeOfDay = TimeOfDay.Day;

        ghostCycleManager.enabled = false;

        directionalLight.intensity = 1.2f;

        bell.SetEnabled(true); // 🔔 activée

        Debug.Log($"☀️ Jour {currentDay + 1}");
    }

    public void StartNight()
    {
        if (currentTimeOfDay == TimeOfDay.Night)
            return;

        currentTimeOfDay = TimeOfDay.Night;

        bell.SetEnabled(false); // 🔕 désactivée

        ghostsRequiredThisNight = baseGhostsFirstNight + currentDay;

        ghostCycleManager.enabled = true;

        directionalLight.intensity = 0.2f;

        PumpkinCounter.Instance.SetNightObjective(ghostsRequiredThisNight);

        Debug.Log($"🌙 Nuit {currentDay + 1}");
    }

    public void EndNight()
    {
        ghostCycleManager.StopCycle();

        SpawnKeyForCurrentDay();

        currentDay++;

        StartDay(); // La clochette sera réactivée ici
    }

    private void SpawnKeyForCurrentDay()
    {
        KeyManager.Instance.SpawnKey(currentDay);
    }
}

