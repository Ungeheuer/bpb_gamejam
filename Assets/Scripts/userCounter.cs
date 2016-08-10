using UnityEngine;
using System.Collections;

public class userCounter : MonoBehaviour {


	[HideInInspector] public int userCount = 100;
	AudioManager am;

	void Start () {
		Debug.Log ("userCount started");
		am = GameObject.Find ("AudioManager").GetComponent<AudioManager> ();
	}

	// changes user counter due to moderative (in-)action & play sound
	public void ImpactOnUsers(int change) {
		userCount = userCount + change;

		if (change > 0) {
			am.audioSources [1].Play();
		} else if (change < 0) {
			am.audioSources [0].Play();
		} else {
			am.audioSources [2].Play();
		}
	}
}
