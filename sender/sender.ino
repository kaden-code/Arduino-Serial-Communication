char input;


void waitForInput(){
  while (Serial.available() == 0) {};
}


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

waitForInput();
input = Serial.read();
Serial.print(input);
}
