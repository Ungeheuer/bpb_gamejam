using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ContentManager : MonoBehaviour {

	[HideInInspector] public static ContentManager single;
	[SerializeField] GameObject commentPrefab;

	[SerializeField] int toScrollViewFrames = 5;
	[SerializeField] float verticalOffset = 2.5f;

	bool mouseDown = false;
	int mouseDownFrames;
	float scrollViewLimit = 5f;
	float scrollViewStart;
	Vector3 contentStartPosition;
	bool scrolling = false;

	public bool occupied;
	public GameObject occupiedBy;

	List<GameObject> comments;
	GameObject contentHolder;

	float targetCameraHeight = 0f;

	// timer
	public float newCommentTimer = 60.0f;


	void Awake(){
		single = this;

		// new List that holds all comments
		comments = new List<GameObject> ();
	}


	void Start () {
		// contentholder holds all comments
		contentHolder = new GameObject ("ContentHolder");
		contentHolder.transform.SetParent (this.gameObject.transform);
		contentHolder.transform.localPosition = Vector3.zero;
	}
	
	void Update(){



		// --- --- --- ---  --- ADD COMMENT AFTER TIME --- --- --- --- --- //

		newCommentTimer -= Time.deltaTime;

		if (newCommentTimer <= 0f)
		{
			AddComment();
		//Debug.Log ("target Time = 0");
			newCommentTimer = 60f;
		}

		newCommentTimer -= 1f;

		// --- --- --- --- --- --- --- --- ---  --- --- --- --- --- --- //


		// --- --- --- ---  --- SCROLLING Controls --- --- --- --- --- //
		if (Input.GetMouseButtonDown (0)) {
			//Debug.Log ("mouse down!");
			mouseDown = true;
			mouseDownFrames = 0;
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


		//Debug.Log ("Add Comment called");

		// instantiates Comment
		GameObject comment = Instantiate (commentPrefab, Vector3.zero, Quaternion.identity) as GameObject;
		comment.transform.SetParent (contentHolder.transform);

		//defines comment position and adds comment into commentsList
		comment.transform.localPosition = new Vector3 (0f, 3.5f * comments.Count + verticalOffset, 0f);

		comments.Add (comment);

		// reset variable for new camera position
		targetCameraHeight = -3.5f * comments.Count + 3f;


		/* new comment needs: - name (line01, row 01)
		 * - comment (line 01, row 02)
		 * - likes (line 01, row 03)
		 * - rating (line 01, row 04)
		 * 
		 * 
		 * 
		 * */

	}








}
