
using UnityEngine;
using System.Collections;

public class ButtonController : MonoBehaviour {

	[SerializeField] string name = "";

	CommentManager timerManager;
	ContentManager contentManager;

	// Use this for initialization
	void Start () {
		timerManager = this.gameObject.transform.parent.GetComponent<CommentManager> ();
		contentManager = GameObject.Find ("ContentManager").GetComponent<ContentManager> ();
	}

	void OnMouseUp(){
		timerManager.ButtonDelete();
	}
}
