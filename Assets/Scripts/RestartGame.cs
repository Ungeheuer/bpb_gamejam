using UnityEngine;
using System.Collections;

public class RestartGame : MonoBehaviour {
	Canvas cv;
	// Use this for initialization
	void Start () {
	//cv = GameObject.Find ("Canvas");

	}

	void OnMouseUp(){
		Application.LoadLevel ("Start");
	}
}
