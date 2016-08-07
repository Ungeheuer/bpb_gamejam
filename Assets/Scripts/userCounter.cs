using UnityEngine;
using System.Collections;

public class userCounter : MonoBehaviour {


	public int userCount;

	// Use this for initialization
	void Start () {
		Debug.Log ("userCount started");
		userCount = 100;
	}
	
	// Update is called once per frame
	void Update () {


	
	}


	// change user counter due to moderative (in-)action	// ***** new method
	public void ImpactOnUsers(int change)
	{
		userCount = userCount + change;
		if (change > 0) {
			GameObject.Find ("yay1").GetComponent<AudioSource> ().Play ();
		} else if (change < 0) {
			GameObject.Find ("boo1").GetComponent<AudioSource> ().Play ();
		} else {
			GameObject.Find ("meh1").GetComponent<AudioSource> ().Play ();
		}
	}

}
