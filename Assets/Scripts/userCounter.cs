using UnityEngine;
using System.Collections;

public class userCounter : MonoBehaviour {


	public int userCount = 100;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {


	
	}


	// change user counter due to moderative (in-)action	// ***** new method
	public void ImpactOnUsers(int change)
	{
		userCount = userCount + change;
	}

}
