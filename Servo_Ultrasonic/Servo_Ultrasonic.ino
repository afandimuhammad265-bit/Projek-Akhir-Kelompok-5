#include <Servo.h>

Servo palangPagar;

int trigPin = 12; // Pin Trigger Sensor
int echoPin = 11; // Pin Echo Sensor

long durasi;
int jarak;

void setup() 
{
  Serial.begin(9600); 
  
  palangPagar.attach(9); // Servo di Pin 9
  
  // Saat pertama dinyalakan, pagar dipastikan TUTUP (posisi horizontal)
  palangPagar.write(90); 
  delay(1000);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() 
{
  // Mengukur jarak dengan Ultrasonik
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  durasi = pulseIn(echoPin, HIGH);
  jarak = durasi * 0.034 / 2;
  
  // Monitoring jarak di laptop
  Serial.print("Jarak Mobil: ");
  Serial.print(jarak);
  Serial.println(" cm");
  
  // JIKA MOBIL TERDETEKSI MENDEKAT (Jarak kurang dari 20 cm)
  if (jarak <= 20 && jarak > 0) 
  {
    Serial.println("KENDARAAN TERDETEKSI! Membuka Pagar...");
    palangPagar.write(180); // Servo bergerak ke 180 (Pagar TERBUKA)
    
    delay(5000); // Jeda 5 detik memberi waktu mobil untuk lewat
    
    Serial.println("Menutup Pagar Kembali...");
    palangPagar.write(90);  // Servo kembali ke 90 (Pagar TERTUTUP)
    delay(1000);            // Jeda pengaman sebelum mendeteksi lagi
  }
  
  delay(200); // Stabilisator pembacaan sensor
}