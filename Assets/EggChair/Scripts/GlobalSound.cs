using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* We are not sound designers, so this entire file is a mess.  Reccommend scrapping it. */
public class GlobalSound : MonoBehaviour
{
    #region singleton
    public static GlobalSound instance;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Debug.Log("Global Sound : Singleton Failure");
        }
    }
    #endregion

    AudioSource mainMusic, pegasus, narrator;
    [SerializeField] AudioSource waterFall;

    [SerializeField]
    PegasusSounds pegaSounds;
    [SerializeField]
    NarratorSounds narratorSounds;
    [Header("Temporary audio clips, roll these into narrator later")]
    [SerializeField]
    AudioClip[] timeRemaining;

    // This is bad programming
    [SerializeField]
    AudioClip zapCharge, zapStrike, windDash, p1win, p2win, tie, brakeSound, hitTree, goldenGod, ringStolen;

    private Coroutine fading = null, horsing = null;


    // Start is called before the first frame update
    void Start()
    {
        AudioSource[] sources = GetComponents<AudioSource>();
        mainMusic = sources[0];
        pegasus = sources[1];
        narrator = sources[2];

        pegasus.clip = pegaSounds.GetBadSound();
    }

    public void Update()
    {
        if (horsing == null) horsing = StartCoroutine(RandomHorseNoise(Random.Range(4f, 15f)));
    }

    public void Init()
    {
        mainMusic.Play();
    }

    public void WindDash()
    {
        pegasus.PlayOneShot(windDash);
    }

    public void ZapCharge()
    {
        pegasus.PlayOneShot(zapCharge);
    }

    public void P1Win()
    {
        narrator.PlayOneShot(p1win);
    }

    public void P2Win()
    {
        narrator.PlayOneShot(p2win);
    }
    public void Tie()
    {
        narrator.PlayOneShot(tie);
    }

    public void GoldenBoost()
    {
        narrator.PlayOneShot(goldenGod);
    }

    public void ZapStrike()
    {
        pegasus.PlayOneShot(zapStrike);
    }

    public void RingStolen()
    {
        pegasus.PlayOneShot(ringStolen);
    }

    public void HitTree()
    {
        pegasus.PlayOneShot(hitTree);
    }

    public void BrakeSound()
    {
        if (!pegasus.isPlaying) { pegasus.clip = brakeSound; pegasus.Play(); }
    }

    public void BadHorseSound()
    {
        if (!pegasus.isPlaying) { pegasus.clip = pegaSounds.GetBadSound(); pegasus.Play(); }
    }

    public void FadeOut(float FadeTime)
    {
        pegasus.volume = 0.0f;
        waterFall.Stop();
        if(fading == null) fading = StartCoroutine(FadeOutSource(mainMusic, FadeTime));
    }

    public void EnterWaterfall()
    {
        StartCoroutine(FadeInSource(waterFall, 1.0f, 0.7f));
    }

    public void ExitWaterfall()
    {
        StartCoroutine(FadeOutSource(waterFall, 1.0f));
    }

    private int timeTicker = 0;
    public void TimeTick()
    {
        Debug.Log("Narrator countdown " + timeTicker);
        pegasus.PlayOneShot(timeRemaining[timeTicker++]);
    }

    private IEnumerator FadeOutSource(AudioSource audioSource, float FadeTime)
    {
        float startVolume = audioSource.volume;

        while (audioSource.volume > 0)
        {
            audioSource.volume -= startVolume * Time.deltaTime / FadeTime;

            yield return null;
        }

        //audioSource.Stop();
        //audioSource.volume = startVolume;
        fading = null;
    }

    private IEnumerator FadeInSource(AudioSource audioSource, float FadeTime, float goal)
    {
        float startVolume = audioSource.volume;

        while (audioSource.volume < goal)
        {
            audioSource.volume += Time.deltaTime / FadeTime;

            yield return null;
        }
    }

    private IEnumerator RandomHorseNoise(float time)
    {
        float timer = 0.0f;
        while(timer < time)
        {
            timer += Time.deltaTime;
            yield return new WaitForEndOfFrame();
        }
        pegasus.PlayOneShot(pegaSounds.GetAmbient());
        horsing = null;
    }

    public void Narrator_PlayDialogue(int num)
    {
        if (!narrator.isPlaying)
        {
            narrator.clip = narratorSounds.PlayDialogue(num);
            narrator.Play();
        }
        else
        {
            Debug.Log("Narrator already speaking");
        }
    }

    public void Narrator_ClaimLandmark(string landmark)
    {
        if (!narrator.isPlaying) {
            narrator.clip = narratorSounds.PlayDialogue(landmark);
            narrator.Play();
        } else
        {
            Debug.Log("Narrator already speaking");
        }
    }


}
