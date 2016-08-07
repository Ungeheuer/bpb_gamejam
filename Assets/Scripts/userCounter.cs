using UnityEngine;
using System.Collections;

public class userCounter : MonoBehaviour {

	// timer
	public float userRandomizer = 60.0f;

	public int userCount = 100;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {


		userRandomizer -= Time.deltaTime;

		if (userRandomizer <= 0f)
		{
			userCount++;
		}
	
	}
}
