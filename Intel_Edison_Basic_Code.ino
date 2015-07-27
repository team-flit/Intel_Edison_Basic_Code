#include <Wire.h>
#include <Intel_Edison_BT_SPP.h>

Intel_Edison_BT_SPP spp = Intel_Edison_BT_SPP();

void setup() {
//	Serial.begin(115200);
//
	Serial.begin(9600);
 	Serial.println("Intel Edison BT SPP test!");
	spp.open();
}

void processSpp(char ch){
//    Serial.print(ch);
    switch(ch){
      case 'W':
        Serial.println("Straight");
        break;
      case 'A':
        Serial.println("LEFT");
        break;
      case 'S':
        Serial.println("STOP");
        break;
      case 'D':
        Serial.println("RIGHT");
        break;        
    }
}

void loop() {
	ssize_t size = spp.read();
	if (size != -1) {
                const char* buf = spp.getBuf();
                for(int i=0;i<size;i++){
                  processSpp(buf[i]);
                }
//		Serial.println(spp.getBuf());
	} else {
		// Well, some error here 
		delay(500);
	}
}#include <Wire.h>
#include <Intel_Edison_BT_SPP.h>

Intel_Edison_BT_SPP spp = Intel_Edison_BT_SPP();

void setup() {
//	Serial.begin(115200);
//
	Serial.begin(9600);
 	Serial.println("Intel Edison BT SPP test!");
	spp.open();
}

void processSpp(char ch){
//    Serial.print(ch);
    switch(ch){
      case 'W':
        Serial.println("Straight");
        break;
      case 'A':
        Serial.println("LEFT");
        break;
      case 'S':
        Serial.println("STOP");
        break;
      case 'D':
        Serial.println("RIGHT");
        break;        
    }
}

void loop() {
	ssize_t size = spp.read();
	if (size != -1) {
                const char* buf = spp.getBuf();
                for(int i=0;i<size;i++){
                  processSpp(buf[i]);
                }
//		Serial.println(spp.getBuf());
	} else {
		// Well, some error here 
		delay(500);
	}
}
