#define SENSOR 2
#define LED 13

void setup() {
  pinMode(SENSOR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int getaran = digitalRead(SENSOR);

  if (getaran == HIGH) {
    digitalWrite(LED, HIGH);
    Serial.println("Ada getaran!");
  } else {
    digitalWrite(LED, LOW);
  }
}
