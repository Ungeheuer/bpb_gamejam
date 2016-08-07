using UnityEngine;
using System.Collections;

public class FinalScreenManager : MonoBehaviour {
	
	[SerializeField] TextMesh userCountText;
	[SerializeField] TextMesh commentText;

	GameObject cm;
	GameObject lt;
	GameObject hm;
	GameObject cc;


	void Awake () {
		lt = GameObject.Find ("LevelManager");
		cm = GameObject.Find ("ContentManager");
		hm = GameObject.Find ("HeaderManager");
		cc = GameObject.Find ("ContentCamera");

		lt.SetActive(false);
		cm.SetActive(false);
		hm.SetActive(false);
		cc.SetActive(false);

	}

	// Use this for initialization
	void Start () {
		
		userCountText.text = lt.GetComponent<LevelTimer>().finalUserCount + " user";
		commentText.text = cm.GetComponent<ContentManager>().MistakeReview();
	}
	
	// Update is called once per frame
	void Update () {


	
	}
}
