using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DigitalRuby.SoundManagerNamespace;

public class SceneSoundManager : MonoBehaviour
{
    public AudioSource[] SoundAudioSources;
    public AudioSource[] MusicAudioSources;

    public void PlaySound(int index)
    {
        SoundAudioSources[index].PlayOneShotSoundManaged(SoundAudioSources[index].clip);
    }

    public void PlaySoundUnManaged(int index)
    {
        SoundAudioSources[index].PlayOneShot(SoundAudioSources[index].clip);
    }

    public void PlayMusic(int index)
    {
        MusicAudioSources[index].PlayLoopingMusicManaged(0.05f, 1.0f, true);
    }
    public IEnumerator PlayDelaySound(int index, float time)
    {
        yield return new WaitForSeconds(time);
        SoundAudioSources[index].PlayOneShotSoundManaged(SoundAudioSources[index].clip);
    }

    private void Start()
    {
        PlayMusic(0);
    }
}
