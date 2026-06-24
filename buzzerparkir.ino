// --- Konfigurasi Pin ---
const int trigPin = A0;
const int echoPin = A1;
const int buzzerPin = 12;

long duration;
int distance;

void setup() {
  Serial.begin(9600);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  
  Serial.println("Sistem Sensor Parkir Ala Video Aktif!");
}

void loop() {
  // 1. Membaca Jarak
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; 
  
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // 2. Logika Suara Persis Video
  // Di video, alarm mulai bunyi saat jarak di bawah 20 cm
  if (distance > 0 && distance < 20) {
    
    // Rahasianya ada di sini: Jarak dikalikan dengan angka pengali (misal 10 atau 15)
    // Jarak 19cm -> delay 190ms (lambat)
    // Jarak 3cm  -> delay 30ms (sangat cepat)
    int waktuJeda = distance * 10; 
    
    tone(buzzerPin, 2000);         // Bunyikan buzzer
    delay(waktuJeda);              // Lama bunyi menyesuaikan jarak
    
    noTone(buzzerPin);             // Matikan buzzer
    delay(waktuJeda);              // Lama diam menyesuaikan jarak
    
  } else {
    // Jika jarak lebih dari 20 cm atau error, diam
    noTone(buzzerPin); 
  }
}