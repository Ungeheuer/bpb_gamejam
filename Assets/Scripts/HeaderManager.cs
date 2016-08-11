using UnityEngine;
using System.Collections;

public class HeaderManager : MonoBehaviour {

	[SerializeField] TextMesh HeaderTextLeft;
	[SerializeField] TextMesh HeaderTextRight;


	System.DateTime date;
	userCounter users;
	LevelTimer lt;


	// Use this for initialization
	void Awake () {
		users = this.gameObject.AddComponent<userCounter> ();
		lt = GameObject.Find ("LevelManager").GetComponent<LevelTimer> ();
	
	}
	
	// Update is called once per frame
	void Update () {
		HeaderTextLeft.text = "User: " + users.userCount;
		HeaderTextRight.text = "Zeit: " + lt.levelTimer.ToString("F0") ;
	}
}
