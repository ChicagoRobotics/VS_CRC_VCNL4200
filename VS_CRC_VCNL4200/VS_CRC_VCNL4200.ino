/*
 Name:		VS_CRC_VCNL4200.ino
 Created:	9/3/2017 9:20:20 PM
 Author:	jlaing
*/

#include "CRC_VCNL4200.h"
CRC_VCNL4200 vcnl4200;


void setup() {
	Serial.begin(9600);
	while (!Serial);
	Serial.println("Booting.");
	if (vcnl4200.exists()) {
		Serial.println("VCNL4200 found");
		vcnl4200.initialize();
		Serial.println("VCNL4200 initialized");
	}
}

// the loop function runs over and over again until power down or reset
void loop() {
	Serial.print("Proximity: ");
	Serial.println(vcnl4200.getProximity());
	Serial.print("Ambient: ");
	Serial.println(vcnl4200.getAmbient());
	Serial.println();
	delay(2000);
}
