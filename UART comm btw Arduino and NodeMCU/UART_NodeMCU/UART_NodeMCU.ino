#include <SoftwareSerial.h>
SoftwareSerial myserial(16, 17);
// this sample code provided by www.programmingboss.com
//#define RXp2 16
//#define TXp2 17
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  myserial.begin(9600, SERIAL_8N1, 16, 17);
}
void loop() {
    Serial.println("Message Received: ");
    Serial.println(Serial2.readString());
}
