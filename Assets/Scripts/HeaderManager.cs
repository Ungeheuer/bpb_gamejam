using UnityEngine;
using System.Collections;

public class HeaderManager : MonoBehaviour {

	[SerializeField] TextMesh HeaderText;

	System.DateTime date;
	userCounter users;


	// Use this for initialization
	void Awake () {
		users = this.gameObject.AddComponent<userCounter> ();
	
	}
	
	// Update is called once per frame
	void Update () {

		HeaderText.text = "user: " + users.userCount;

	//	date = System.DateTime.Now;
	//	HeaderText.text = date.DayOfWeek + ", " + date.ToString ("HH:mm:ss");
	}
}
