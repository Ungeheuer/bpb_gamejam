using UnityEngine;
using System.Collections;
using System;

public class CommentManager : MonoBehaviour {

	// button to delete Comments
	[SerializeField] GameObject deleteButton;

	// Renderer / Style 
	public MeshRenderer commentTexture;
	[SerializeField] MeshRenderer commentBackground;

	// Textmeshes to connect with csv-file
	public TextMesh nameText;
	public TextMesh commentText;
	[SerializeField] TextMesh likeNumber;

	// Like Button
	[SerializeField] GameObject likeButton;

	//meta-information
	[HideInInspector] public int commentNo;
	[HideInInspector] public int deleteImpact;
	[HideInInspector] public int acceptImpact;

	// external script references
	ContentManager cm;


	void Start () {
		cm = GameObject.Find ("ContentManager").GetComponent<ContentManager> ();
	}

	// --- --- --- --- --- --- --- --- INSERT TEXT --- --- --- --- --- --- --- --- --- //
	// --- called by ContentManager, fills Textmeshes with content stored in csv-file --- //
	public void InsertTexts (int _commentNo) {
		commentNo = _commentNo;
		commentText.text = WrapText.wrap (CSVParser.getCellText (2, commentNo), 30);
		nameText.text = CSVParser.getCellText (1, commentNo);
		likeNumber.text = CSVParser.getCellText (3, commentNo);
		deleteImpact = int.Parse(CSVParser.getCellText (7, commentNo));	
		acceptImpact = int.Parse(CSVParser.getCellText (8, commentNo));
	} // --- --- --- --- --- --- close insert text --- --- --- --- --- --- --- --- --- //


	// --- --- --- --- --- --- --- --- BUTTON & SAVING --- --- --- --- --- --- --- --- --- //
	// --- if button is pressed, it deletes the comment but saves all content --- //
	public void ButtonDelete(){
		GameObject.Find ("HeaderManager").GetComponent<userCounter> ().ImpactOnUsers (deleteImpact);
		cm.addDeletedComment(new string[] {	// name, text, delete
			CSVParser.getCellText (1, commentNo), CSVParser.getCellText (2, commentNo), CSVParser.getCellText (7, commentNo), "ungerechtfertigte \"Zensur\""});
		Destroy (this.gameObject);
	} // --- --- --- --- --- --- close button delete --- --- --- --- --- --- --- --- --- //


	// --- if button is not pressed but should have, content is saved and impact and users calculated --- //
	public void Accept(){
		GameObject.Find ("HeaderManager").GetComponent<userCounter> ().ImpactOnUsers (acceptImpact);
		cm.addDeletedComment(new string[] {	// name, text, insert
			CSVParser.getCellText (1, commentNo), CSVParser.getCellText (2, commentNo), CSVParser.getCellText (8, commentNo), "ungestrafter AGB-Verstoß"});
	} // --- --- --- --- --- --- close comment accepted --- --- --- --- --- --- --- --- --- //
	// --- --- --- --- --- --- --- --- close button & saving section --- --- --- --- --- -- //	

}
	