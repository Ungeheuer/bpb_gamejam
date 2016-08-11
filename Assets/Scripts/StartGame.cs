using UnityEngine;
using System.Collections;

public class StartGame : MonoBehaviour {
	Canvas cv;
	// Use this for initialization
	void Start () {
	//	cv = GameObject.Find ("Canvas");
	
	}
	
	// Update is called once per frame
	public void loadLevel () {
		Application.LoadLevel ("Main");
	}
}
