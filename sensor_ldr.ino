const int pinLDR = A0;

const int led1 = 8;
const int led2 = 9;
const int led3 = 10;

int threshold = 800;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int nilaiLDR = analogRead(pinLDR);

  Serial.print("Nilai LDR = ");
  Serial.print(nilaiLDR);

  if (nilaiLDR > threshold) {

    Serial.println(" --> MALAM / GELAP");

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);

  } else {

    Serial.println(" --> PAGI / CERAH");

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

  }

  delay(500);
}
