using UnityEngine;
using System.Collections;

public class HeaderManager : MonoBehaviour {

	[SerializeField] TextMesh HeaderText;

	System.DateTime date;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		date = System.DateTime.Now;
		HeaderText.text = date.DayOfWeek + ", " + date.ToString ("HH:mm:ss");
	}
}
