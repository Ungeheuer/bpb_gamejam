using UnityEngine;
using System.Collections;

public class FinalScreenManager : MonoBehaviour {

	// scrolling & mouse-ctrls
	[SerializeField] int toScrollViewFrames = 5;
	[SerializeField] float verticalOffset = 2.5f;
	float scrollViewLimit = 5f;
	float scrollViewStart;
	Vector3 contentStartPosition;
	bool scrolling = false;
	float targetCameraHeight = 0f;

	bool mouseDown = false;
	int mouseDownFrames;
	
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


	void Start () {
		int finalUserCount = lt.GetComponent<LevelTimer> ().finalUserCount;
		if (finalUserCount < 100) {
			userCountText.text = "auf " + finalUserCount + " User geschrumpft.";
			userCountText.color = Color.red;
		} else if (finalUserCount > 100) {
			userCountText.text = "auf " + finalUserCount + " User gewachsen.";
			userCountText.color = Color.green;
		} else {
			userCountText.text = "weder gewachsen noch geschrumpft.";
		}
		commentText.text = cm.GetComponent<ContentManager>().MistakeReview();
	}


	void Update() {

		// --- --- --- ---  --- SCROLLING Controls --- --- --- --- --- //
		if (Input.GetMouseButtonDown (0)) {
			Debug.Log ("mouse down!");
			mouseDown = true;
			mouseDownFrames = 0;

		} else if (Input.GetMouseButtonUp (0)) {
			mouseDown = false;
			scrolling = false;

		} else if (!scrolling && mouseDown) {
			mouseDownFrames++;

			if (mouseDownFrames >= toScrollViewFrames) {
				scrollViewStart = Input.mousePosition.y;
				scrolling = true;

			}
		} else if (scrolling && mouseDown) {
				float pixelScrollDifference = Input.mousePosition.y - scrollViewStart;
				float newContentY = Camera.main.ScreenToWorldPoint (new Vector3 (0f, pixelScrollDifference, 0f)).y; 
				newContentY = Mathf.Clamp (newContentY + contentStartPosition.y + 5f, -100f, 100f);
	
				Vector3 myTextPos = this.transform.localPosition;

				this.transform.localPosition = new Vector3 (myTextPos.x, newContentY, 0f);
				this.transform.localPosition = new Vector3 (myTextPos.x, newContentY, 0f);
			//	Debug.Log ("newContentY : " + newContentY);
		} // --- --- --- --- close scrolling ctrls --- --- --- --- //
	}
}