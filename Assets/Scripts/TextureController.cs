using UnityEngine;
using System.Collections;

public class TextureController : MonoBehaviour {

	CommentManager commentManager;

	// Use this for initialization
	void Start () {
		commentManager = this.gameObject.transform.parent.GetComponent<CommentManager> ();
	}

	void OnMouseUp(){
		if (!ContentManager.single.occupied) {
			Debug.Log (this.gameObject.name + " got pushed!");
			//commentManager.ChangeTexture ();
		}
	}
}
