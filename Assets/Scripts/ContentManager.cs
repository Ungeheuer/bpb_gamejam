using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ContentManager : MonoBehaviour {

	[HideInInspector] public static ContentManager single;
	[SerializeField] GameObject commentPrefab;
	[SerializeField] GameObject inputPrefab;

	[SerializeField] int toScrollViewFrames = 5;
	[SerializeField] float verticalOffset = 2.5f;

	bool mouseDown = false;
	int mouseDownFrames;
	float scrollViewLimit = 5f;
	float scrollViewStart;
	Vector3 contentStartPosition;
	bool scrolling = false;

	public bool occupied;
	public bool hasGameStarted = false;
	public GameObject occupiedBy;

	List<GameObject> comments;

	GameObject contentHolder;

	userCounter users;

	float targetCameraHeight = 0f;

	[SerializeField] GameObject input;

	// timer
	public float newCommentTimer = 20.0f;


	public int commentNo = 0;

	List<string[]> deletedComments;		
	List<string[]> acceptedComments;	


	void Awake(){
		single = this;

		// new List that holds all comments
		comments = new List<GameObject> ();
		deletedComments = new List<string[]> ();	
		acceptedComments = new List<string[]> ();	
	}


	void Start () {
		// contentholder holds all comments
		contentHolder = new GameObject ("ContentHolder");
		contentHolder.transform.SetParent (this.gameObject.transform);
		contentHolder.transform.localPosition = Vector3.zero;

		users = GameObject.Find ("HeaderManager").GetComponent<userCounter> ();
		newCommentTimer = (float)users.userCount;
	}
	
	void Update(){

		// --- --- --- ---  --- ADD COMMENT AFTER TIME --- --- --- --- --- //

		newCommentTimer -= Time.deltaTime;

		if (newCommentTimer <= 0f)
		{
			AddComment();
			newCommentTimer = (float)users.userCount;
		}

		//if (hasGameStarted == true) {
			newCommentTimer -= 1f;
		//}
		// --- --- --- --- --- --- --- --- ---  --- --- --- --- --- --- //


		// --- --- --- ---  --- SCROLLING Controls --- --- --- --- --- //
		if (Input.GetMouseButtonDown (0)) {
			//Debug.Log ("mouse down!");
			mouseDown = true;
			mouseDownFrames = 0;
			hasGameStarted = true;

		} else if (Input.GetMouseButtonUp (0)) {
			//Debug.Log ("mouse up!");
			mouseDown = false;
			scrolling = false;
			SetOccupied (false, null);

		} else if (!scrolling && mouseDown) {
			mouseDownFrames++;
			//Debug.Log (mouseDownFrames);
			if (mouseDownFrames >= toScrollViewFrames) {
				scrollViewStart = Input.mousePosition.y;
				contentStartPosition = contentHolder.transform.localPosition;
				scrolling = true;
				SetOccupied (true, this.gameObject);
			}
		} else if (scrolling && mouseDown) {
			//Debug.Log ("scrollViewStart: " + scrollViewStart + ", " + "mouseInput.y: " + Input.mousePosition.y);
			float pixelScrollDifference = Input.mousePosition.y - scrollViewStart;
			float newContentY = Camera.main.ScreenToWorldPoint (new Vector3 (0f, pixelScrollDifference, 0f)).y; 
			newContentY = Mathf.Clamp (newContentY + contentStartPosition.y + 5f, -100f, 100f);
			contentHolder.transform.localPosition = new Vector3 (0f, newContentY, 0f);
		}


		else {
			float currentHeight = contentHolder.transform.localPosition.y;


			contentHolder.transform.localPosition = new Vector3 (0f, Mathf.Lerp (currentHeight, targetCameraHeight, Time.deltaTime / 2f), 0f);
		}



		// --- --- --- --- --- --- --- --- ---  --- --- --- --- --- --- //


	}

	public void SetOccupied(bool _occupied, GameObject _occupiedBy){
		occupied = _occupied;
		occupiedBy = _occupiedBy;
		Debug.Log("Occupied by: " + _occupiedBy + " (" + occupied + ")");
	}


	public void AddComment () {


		if (commentNo == 0) {

			input = Instantiate (inputPrefab, Vector3.zero, Quaternion.identity) as GameObject;
			//input = Instantiate (commentPrefab, Vector3.zero, Quaternion.identity) as GameObject;
			commentNo++;

		} else if (commentNo >= 1 && hasGameStarted == true) {
			commentNo++;

			// instantiates Comment
			GameObject comment = Instantiate (commentPrefab, Vector3.zero, Quaternion.identity) as GameObject;
			comment.transform.SetParent (contentHolder.transform);


			//defines comment position and adds comment into commentsList
			comment.transform.localPosition = new Vector3 (0f, 3.9f * comments.Count + verticalOffset, 0f);
			comment.GetComponent<CommentManager> ().commentNo = commentNo;
			comment.GetComponent<CommentManager> ().commentText.text = WrapText (CSVParser.getCellText (2, commentNo), 30);
			comment.GetComponent<CommentManager> ().nameText.text = CSVParser.getCellText (1, commentNo);

			comment.GetComponent<CommentManager> ().deleteImpact = int.Parse(CSVParser.getCellText (7, commentNo));	// ***** new
			comment.GetComponent<CommentManager> ().acceptImpact = int.Parse(CSVParser.getCellText (8, commentNo));	// ***** new


			CommentManager commentManager = comment.GetComponent<CommentManager> ();
			Color[] palette = new Color[2]; 
			commentManager.commentTexture.material.mainTexture = IconGenerator.create (8, Color.black, true, palette);
			comments.Add (comment);

		}

		input.transform.localPosition = new Vector3 (0f, -3.9f * comments.Count + verticalOffset, 0f);
		targetCameraHeight = -3.5f * comments.Count + 3f;

		if (comments.Count >= 10) {
			GameObject lastComment = comments[comments.Count-10];
			if (lastComment != null) {	// XXXXX new
				lastComment.GetComponent<CommentManager> ().Accept();
			}
			Destroy (lastComment);

			}
	}

	// *** new method vvv
	// Wrap text by line height
	private string WrapText(string input, int lineLength){

		// Split string by char " "         
		string[] words = input.Split(" "[0]);

		// Prepare result
		string result = "";

		// Temp line string
		string line = "";

		// for each all words        
		foreach(string s in words){
			// Append current word into line
			string temp = line + " " + s;

			// If line length is bigger than lineLength
			if(temp.Length > lineLength){

				// Append current line into result
				result += line + "\n";
				// Remain word append into new line
				line = s;
			}
			// Append current word into current line
			else {
				line = temp;
			}
		}

		// Append last line into result        
		result += line;

		// Remove first " " char
		return result.Substring(1,result.Length-1);
	}


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
