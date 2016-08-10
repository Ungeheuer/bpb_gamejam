using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ContentManager : MonoBehaviour {

	// prefabs
	[SerializeField] GameObject commentPrefab;
	[SerializeField] GameObject inputPrefab;

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

	// game ctrls
	public bool hasGameStarted = false;
	GameObject contentHolder;

	// lists
	List<GameObject> comments;
	List<string[]> deletedComments;		
	List<string[]> acceptedComments;	

	// external script references
	userCounter users;

	// variables & objects
	[SerializeField] GameObject input;
	public int commentNo = 0;

	// timer
	public float newCommentTimer = 0f;
	float newCommentSpeed = 30f;


	void Awake(){
		// lists to contain comments
		comments = new List<GameObject> ();
		deletedComments = new List<string[]> ();	
		acceptedComments = new List<string[]> ();	
	}


	void Start () {
		// contentholder contains all comments in unity-hierarchy
		contentHolder = new GameObject ("ContentHolder");
		contentHolder.transform.SetParent (this.gameObject.transform);
		contentHolder.transform.localPosition = Vector3.zero;

		// finds external scripts: userCounter.cs
		users = GameObject.Find ("HeaderManager").GetComponent<userCounter> ();

		// adds first comment (= news input) asap
		AddComment ();
	}


	void Update(){

		if (hasGameStarted) {
			// --- --- --- ---  --- ADD COMMENT AFTER TIME --- --- --- --- --- //
			newCommentTimer -= Time.deltaTime;

			if (newCommentTimer <= 0f) {
				AddComment ();
				newCommentTimer = (float)users.userCount / newCommentSpeed;
				Debug.Log ("Game has started, waiting for first Comment to start in: " + newCommentTimer);
			}
		}   // --- --- --- --- --- close comment adding  --- --- --- --- --- --- //


		// --- --- --- ---  --- SCROLLING Controls --- --- --- --- --- //
		if (Input.GetMouseButtonDown (0)) {
			Debug.Log ("mouse down!");
			mouseDown = true;
			mouseDownFrames = 0;
			hasGameStarted = true;

		} else if (Input.GetMouseButtonUp (0)) {
			mouseDown = false;
			scrolling = false;


		} else if (!scrolling && mouseDown) {
			mouseDownFrames++;

			if (mouseDownFrames >= toScrollViewFrames) {
				scrollViewStart = Input.mousePosition.y;
				contentStartPosition = contentHolder.transform.localPosition;
				scrolling = true;
			}

		} else if (scrolling && mouseDown) {
			float pixelScrollDifference = Input.mousePosition.y - scrollViewStart;
			float newContentY = Camera.main.ScreenToWorldPoint (new Vector3 (0f, pixelScrollDifference, 0f)).y; 
			newContentY = Mathf.Clamp (newContentY + contentStartPosition.y + 5f, -100f, 100f);
			contentHolder.transform.localPosition = new Vector3 (0f, newContentY, 0f);
		}
			
		else {
			float currentHeight = contentHolder.transform.localPosition.y;
			contentHolder.transform.localPosition = new Vector3 (0f, Mathf.Lerp (currentHeight, targetCameraHeight, Time.deltaTime / 2f), 0f);
		} // --- --- --- --- close scrolling ctrls --- --- --- --- //
	}
		

	// --- --- --- --- --- ---  --- ADD COMMENT & MANAGE COMMENT LISTS --- --- --- --- --- --- --- //
	public void AddComment () {

		if (commentNo == 0) {
			input = Instantiate (inputPrefab, Vector3.zero, Quaternion.identity) as GameObject;
			commentNo++;

		} else if (commentNo >= 1 && hasGameStarted == true) {
			commentNo++;

			// instantiates comment & inserts it into commentHolder
			GameObject comment = Instantiate (commentPrefab, Vector3.zero, Quaternion.identity) as GameObject;
			comment.transform.SetParent (contentHolder.transform);

			// defines comment position and adds comment into commentsList
			comment.transform.localPosition = new Vector3 (0f, 3.9f * comments.Count + verticalOffset, 0f);

			// inserts texts into textmeshes
			CommentManager commentManager = comment.GetComponent<CommentManager> ();
			commentManager.InsertTexts(commentNo);

			// adds generated user-images 
			Color[] palette = new Color[2]; 
			commentManager.commentTexture.material.mainTexture = IconGenerator.create (8, Color.black, true, palette);

			// adds comments into commentlist
			comments.Add (comment);
		}

		input.transform.localPosition = new Vector3 (0f, -3.9f * comments.Count + verticalOffset, 0f);
		targetCameraHeight = -3.5f * comments.Count + 3f;

		if (comments.Count >= 10) {
			GameObject lastComment = comments[comments.Count-10];
			if (lastComment != null) {	
				lastComment.GetComponent<CommentManager> ().Accept();
			}
			Destroy (lastComment);
		}
	} // --- --- --- --- --- --- --- --- close add comment --- --- --- --- --- --- //
		

	public void addDeletedComment(string[] commentInfo)
	{
		deletedComments.Add (commentInfo);
		Debug.Log ("Amount of deleted comments: " + deletedComments.Count);
		Debug.Log ("Last deleted comment: " + commentInfo [0] + " - " + commentInfo [1]);
	}



	public string MistakeReview() {
		string output = "";
		for (int i=0; i<deletedComments.Count; i++) {
			Debug.Log(deletedComments [i] [2]);
			if (int.Parse(deletedComments [i] [2]) < 0) {
				output = output + deletedComments [i] [0] + ": " + deletedComments [i] [1] + " - " + deletedComments [i] [3] + " (" + deletedComments [i] [2] + ")\n";
			}
		}
		Debug.Log (output);
		return output;
	}


}
