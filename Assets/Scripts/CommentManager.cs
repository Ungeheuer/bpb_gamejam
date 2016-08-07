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
	public TextMesh nameText;
	public TextMesh commentText;
	[SerializeField] TextMesh likeNumber;

	// Like Button
	[SerializeField] GameObject likeButton;


	//meta-information	// ***** new (21-23)
	public int commentNo;
	public int deleteImpact;
	public int acceptImpact;




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
		GameObject.Find ("HeaderManager").GetComponent<userCounter> ().ImpactOnUsers (deleteImpact);				// ***** new (60-62)
		ContentManager.single.addDeletedComment(new string[] {	// name, text, delete
			CSVParser.getCellText (1, commentNo), CSVParser.getCellText (2, commentNo), CSVParser.getCellText (7, commentNo)});	// ***** new
		Destroy (this.gameObject);
	}
		
}
	