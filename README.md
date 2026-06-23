# 📡 Proyek Akhir IoT - Mata Kuliah Inovasi Teknologi

## Kelompok 5

### 👥 Anggota Kelompok
| 1 | Bayu Riyanto [2413030009]
| 2 | Nugroho Riziq Darmawan Nata Saputra [2413030018]
| 3 | Rivaldo Aditya Syahputra [2413030034]
| 4 | M. Afandi [2413030053]

---

## 📖 Deskripsi Proyek
Proyek akhir Internet of Things (IoT) ini bertujuan untuk mengimplementasikan beberapa sensor dalam satu sistem sederhana guna memahami proses pengambilan data, pemrosesan informasi, dan pemberian respons secara otomatis menggunakan mikrokontroler.

Pada proyek ini digunakan empat komponen utama, yaitu:

- Sensor Getar (SW-420) 
- Sensor Ultrasonik (HC-SR04) 
- Sensor LDR (Light Dependent Resistor) 
- Sensor Buzzer 

Masing-masing anggota bertanggung jawab atas implementasi dan pengujian sensor yang berbeda sesuai pembagian tugas kelompok.

---

## 🛠️ Perangkat yang Digunakan
| Komponen | Fungsi |
|-----------|---------
| Arduino Uno | Mikrokontroler utama |
| Sensor SW-420 | Mendeteksi getaran |
| Sensor Ultrasonik HC-SR04 | Mengukur jarak objek |
| Sensor LDR | Mendeteksi intensitas cahaya |
| Buzzer | Menghasilkan suara/alarm |
| Breadboard | Media perakitan rangkaian |
| Kabel Jumper | Penghubung antar komponen |

---

# 📌 Implementasi Sensor
## 1️⃣ Sensor Getar (SW-420)

**Penanggung Jawab:** Bayu Riyanto

### Deskripsi
Sensor SW-420 merupakan sensor yang digunakan untuk mendeteksi adanya getaran atau guncangan pada suatu objek.

### Fungsi
- Mendeteksi getaran.
- Mendeteksi benturan.
- Sistem keamanan sederhana.

### Cara Kerja
Ketika sensor menerima getaran yang melebihi ambang batas, modul akan mengirimkan sinyal digital yang kemudian diproses oleh mikrokontroler.

---

## 2️⃣ Sensor Ultrasonik (HC-SR04)

**Penanggung Jawab:** Nugroho Riziq Darmawan Nata Saputra

### Deskripsi
Sensor ultrasonik digunakan untuk mengukur jarak suatu objek menggunakan gelombang suara ultrasonik.

### Fungsi
- Mengukur jarak objek.
- Mendeteksi keberadaan benda.
- Monitoring posisi objek.

### Cara Kerja
Sensor memancarkan gelombang ultrasonik melalui pin Trigger dan menerima pantulan melalui pin Echo. Waktu tempuh gelombang digunakan untuk menghitung jarak objek.

---

## 3️⃣ Sensor LDR (Light Dependent Resistor)

**Penanggung Jawab:** Rivaldo Aditya Syahputra

### Deskripsi
LDR adalah sensor cahaya yang dapat mendeteksi perubahan intensitas cahaya di lingkungan sekitar.

### Fungsi
- Mendeteksi kondisi terang dan gelap.
- Simulasi lampu otomatis.
- Monitoring tingkat pencahayaan.

### Cara Kerja
Nilai resistansi LDR berubah sesuai intensitas cahaya yang diterima. Data tersebut dibaca melalui pin analog Arduino dan digunakan untuk menentukan kondisi lingkungan.

---

## 4️⃣ Buzzer

**Penanggung Jawab:** M. Afandi

### Deskripsi
Buzzer merupakan perangkat output yang menghasilkan suara sebagai indikator atau alarm.

### Fungsi
- Alarm peringatan.
- Notifikasi suara.
- Indikator kondisi tertentu.

### Cara Kerja
Buzzer akan aktif ketika menerima sinyal dari mikrokontroler dan menghasilkan suara sesuai program yang dijalankan.

---

# 🎯 Tujuan Proyek

- Memahami konsep Internet of Things (IoT).
- Mempelajari penggunaan berbagai jenis sensor.
- Mengintegrasikan sensor dengan mikrokontroler.
- Mengembangkan sistem otomatisasi sederhana.
- Meningkatkan kemampuan pemrograman dan perancangan rangkaian elektronik.

---

# ✅ Kesimpulan

Proyek akhir IoT ini berhasil mengimplementasikan empat sensor yang memiliki fungsi berbeda, yaitu sensor getar SW-420, sensor ultrasonik, sensor LDR, dan buzzer. Melalui proyek ini, anggota kelompok memperoleh pemahaman mengenai cara kerja sensor, proses pembacaan data, serta penerapan sistem otomatis berbasis mikrokontroler.

---

# 🎥 Video Presentasi

📹 **Link Video Presentasi:**

> [Klik Link Disini](https://www.youtube.com/)

---

## 📄 Lisensi

Proyek ini dibuat untuk memenuhi tugas akhir Mata Kuliah **Inovasi Teknologi**.
