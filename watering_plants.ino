int Relay = 8;
const int joystick = 2;

int statusOfJoystick = 0;

void setup() {
  Serial.begin(9600);
  pinMode(Relay, OUTPUT);
  pinMode(joystick, INPUT_PULLUP);
  delay(2000);
}

void loop() {
  statusOfJoystick = digitalRead(joystick);
  
  if(statusOfJoystick == 0) {
    digitalWrite(Relay, LOW);
  } else {
    digitalWrite(Relay, HIGH);
  }
}
