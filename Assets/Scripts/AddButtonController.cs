using UnityEngine;
using System.Collections;

public class AddButtonController : MonoBehaviour {

	CommentManager commentManager;

	// Use this for initialization
	void Start () {
		commentManager = this.gameObject.transform.parent.GetComponent<CommentManager> ();
	}
		
	void OnMouseUp(){
		if (!ContentManager.single.occupied) {
			//ContentManager.single.AddTimer ();
		}
	}
}
