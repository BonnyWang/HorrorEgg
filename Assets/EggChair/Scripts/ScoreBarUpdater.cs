using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreBarUpdater : MonoBehaviour
{
    [SerializeField] UnityEngine.UI.Text[] scoreTexts;
    [SerializeField] RectTransform[] scoreBadge;

    [SerializeField] GameObject[] championRibbon;

    [SerializeField] RectTransform[] scoreBars;

    private float ringCount = 184; // hard coded right now
    private int p1score = 0, p2score = 0, neutralscore;

    public void Init(int ringCount)
    {
        scoreBars[0].sizeDelta = new Vector2(scoreBars[1].sizeDelta.x, 0);
        scoreBars[1].sizeDelta = new Vector2(scoreBars[1].sizeDelta.x, 0);
    }

    // Update is called once per frame
    void Update()
    {
        // Score bars
        //scoreBars[1].fillAmount = 1.5f * (float) p1score / ringCount;
        //scoreBars[2].fillAmount = 1.5f * (float) p2score / ringCount; // ringCount here?
        scoreBars[0].sizeDelta = new Vector2(scoreBars[0].sizeDelta.x,
                                        (2.5f * (float) p1score / ringCount) * 1759);
        scoreBars[1].sizeDelta = new Vector2(scoreBars[1].sizeDelta.x,
                                        (2.5f * (float)p2score / ringCount) * 1759);

        // Text updates
        scoreTexts[0].text = p1score.ToString();
        scoreTexts[1].text = p2score.ToString();
        scoreTexts[2].text = neutralscore.ToString();

    }

    public void UpdateScore(int p1, int p2, int neutral)
    {
        p1score = p1;
        p2score = p2;
        neutralscore = neutral;
    }

    public void FinalizeScore()
    {
        if (p1score > p2score) { championRibbon[0].SetActive(true); GlobalSound.instance.P1Win(); }
        else if (p1score < p2score) { championRibbon[1].SetActive(true); GlobalSound.instance.P2Win(); }
        else GlobalSound.instance.Tie();
    }
}
