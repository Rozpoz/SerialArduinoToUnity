using UnityEngine;
using System.Collections;
using System.IO.Ports;

public class arduinoReceive : MonoBehaviour {

	SerialPort stream = new SerialPort("/dev/cu.usbmodem1411", 38400);


	void Start () {
		stream.Open(); //Open the Serial Stream.
	}

	// Update is called once per frame
	void Update () {
		string value = stream.ReadLine();
		string[] vec2 = value.Split(','); 
		for ( int j= 1; j < vec2.Length ; j+=2){

			float XCheck = float.Parse(vec2[j]);
			float YCheck = float.Parse(vec2[(j+1)]);


			Debug.Log(XCheck);
			Debug.Log(YCheck);
		}

			stream.BaseStream.Flush(); //Clear the serial information so we assure we get new information.
		}
