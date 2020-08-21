/*******
*******/

int redLed = 12;
int greenLed = 11;
int buzzer = 10;
int OilA0 = A0;
// Your threshold value
int sensorThres1 = 600;
int sensorThres2 = 800;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(OilA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(OilA0);

  Serial.print("Pin A0: ");
  Serial.print("Oil Level = ");
  Serial.println(analogSensor);
  delay(200);
  // Checks if it has reached the threshold value
  if (analogSensor >=sensorThres1 && analogSensor <=sensorThres2)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
   
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);

  }
  delay(100);
}

