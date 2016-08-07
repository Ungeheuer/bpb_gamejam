using UnityEngine;
using System.Collections;

public class LevelTimer : MonoBehaviour {
	public float levelTimer = 60.0f;
	float minute = 1.5f;
	ContentManager cm;
	userCounter users;
	public int finalUserCount = 0;
	bool gameOver = false;

	// Use this for initialization
	void Start () {
		levelTimer *= minute;
		cm = GameObject.Find ("ContentManager").GetComponent<ContentManager> ();

	}


	void Awake () {
		users = this.gameObject.AddComponent<userCounter> ();
	}
	
	// Update is called once per frame
	void Update () {

		if (gameOver) {
			return;
		}

		if (cm.hasGameStarted == true) {
			levelTimer -= Time.deltaTime;
			finalUserCount = users.userCount;
			//Debug.Log ("Leveltimer: " + levelTimer);

			if (levelTimer <= 0f) {
				Debug.Log ("time is up!");
				gameOver = true;
				Application.LoadLevelAdditive ("EndScreen");
		//		DestroyImmediate(this.gameObject);
			}
		}
	}
}
