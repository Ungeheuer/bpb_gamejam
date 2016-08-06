using UnityEngine;
using System.Collections;

public class HolderController : MonoBehaviour {

	[SerializeField] string name = "";
	[SerializeField] double change = 0;

	CommentManager commentManager;

	// Use this for initialization
	void Start () {
		commentManager = this.gameObject.transform.parent.GetComponent<CommentManager> ();
	}

	void OnMouseUp(){
		if (!ContentManager.single.occupied) {
			Debug.Log (this.gameObject.name + " got pushed!");
			//commentManager.ChangeValue (name, change);
		}
	}
}
