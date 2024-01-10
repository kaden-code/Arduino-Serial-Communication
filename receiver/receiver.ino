int lightPin = 8;
String lightValue;
char on = "ON";
char off = "OFF";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lightPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() > 0){
lightValue = Serial.readString();
Serial.println(lightValue);
if(lightValue == "ON"){
  Serial.println("Light On");
digitalWrite(lightPin,HIGH);
}
if (lightValue == "OFF") {
Serial.println("Light Off");
digitalWrite(lightPin,LOW);
}
}
}
