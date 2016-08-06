using UnityEngine;
using System.Collections;

public class ButtonController : MonoBehaviour {

	[SerializeField] string name = "";

	CommentManager timerManager;

	// Use this for initialization
	void Start () {
		timerManager = this.gameObject.transform.parent.GetComponent<CommentManager> ();
	}

	void OnMouseUp(){
		if (!ContentManager.single.occupied) {
			Debug.Log (this.gameObject.name + " got pushed!");
			timerManager.HitButton (name);
		}
	}
}
