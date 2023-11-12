using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class IntroSceneManager : MonoBehaviour
{

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space)) {
            StartCoroutine(FadeOutLogo());
        }
    }

    IEnumerator FadeOutLogo()
    {
        var image = this.GetComponent<UnityEngine.UI.Image>();
        image.CrossFadeColor(new Color(0.0f, 0.0f, 0.0f, 1.0f), 1.25f, false, false);
        yield return new WaitForSeconds(1.5f);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
