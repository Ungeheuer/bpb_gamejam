using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ReadDemo : MonoBehaviour {

	public TextAsset csv; 

	void Start () {
		CSVParser.DebugOutputGrid( CSVParser.SplitCsvGrid(csv.text) ); 

	}


}