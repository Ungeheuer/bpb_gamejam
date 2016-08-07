using UnityEngine;
using System.Collections;
using System;

public class CommentManager : MonoBehaviour {

	// button to delete Comments
	[SerializeField] GameObject deleteButton;
	// Renderer / Style 
	public MeshRenderer commentTexture;
	[SerializeField] MeshRenderer commentBackground;

	// Textfields to connect with csv-file
	[SerializeField] TextMesh nameText;
	public TextMesh commentText;
	[SerializeField] TextMesh likeNumber;

	// Like Button
	[SerializeField] GameObject likeButton;



	// Use this for initialization
	void Start () {
		
		deleteButton.SetActive (true);
	}

	// Update is called once per frame
	void Update () {
		
	
	}

	public void HitButton(string name){
	
	if (name == "delete") {
			ButtonDelete ();
		}
	}

	public void ButtonPlay(){

		deleteButton.SetActive (false);
	}

	public void ButtonReset(){

		deleteButton.SetActive (true);
	}



	public void ButtonDelete(){
		Destroy (this.gameObject);
	}
		
}
	