#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <iomanip>

using namespace std;

void tugasTersembunyi() {
	cout << "HAI!";

	this_thread::sleep_for(chrono::seconds(3));
	system("cls");

	cout << "AKU DEEOGIKK!";

	this_thread::sleep_for(chrono::seconds(2));
	system("cls");

	cout << "AKU KELAS XI RPL!";

	this_thread::sleep_for(chrono::seconds(2));
	system("cls");

	cout << "UDAH SI ITU AJA!";

	this_thread::sleep_for(chrono::seconds(2));
	system("cls");

	cout << "WKWKWKWK!";

	this_thread::sleep_for(chrono::seconds(1));
	system("cls");

	cout << "PROGRAM INI DIBUAT KARENA PENGEN NYOBA C++ dan LAGI GABUT AJA!";

	this_thread::sleep_for(chrono::seconds(5));
	system("cls");
	this_thread::sleep_for(chrono::seconds(2));

	tugasTersembunyi();
}

void tugas4() {
	double gaji, tarifPerJam, jumlahJamKerjaPerMinggu;
	string namaKaryawan;

	cout << "NGITUNG PENGGAJIAN KARYAWAN NJIR\n";
	cout << "Nama Karyawan : "; cin >> namaKaryawan;
	cout << "Jumlah Jam Kerja Per Minggu : "; cin >> jumlahJamKerjaPerMinggu;
	cout << "Tarif Perjam : "; cin >> tarifPerJam;
	system("cls");
	cout << "menghitung...";
	this_thread::sleep_for(chrono::seconds(2));
	system("cls");

	gaji = tarifPerJam * jumlahJamKerjaPerMinggu;

	cout << fixed << setprecision(2);
	cout << "===============================\n";
	cout << "= NAMA KARYAWAN : " << namaKaryawan<<"\n";
	cout << "= JAM KERJA : " << jumlahJamKerjaPerMinggu<<" JAM / MINGGU\n";
	cout << "= GAJI TOTAL : Rp " << gaji<<"\n";
	cout << "===============================";
	this_thread::sleep_for(chrono::seconds(10));
}

void tugas3() {
	string nama;
	int umur;

	cout << "SELAMAT DATANG DI BIOSKOP KOMPLEX KAMI...\n";
	cout << "masukkan nama anda ";
	cin >> nama;
	cout << "masukkan umur anda ";
	cin >> umur;

	if (umur > 17) {
		system("cls");
		cout << "Hai " << nama << "! Anda diperbolehkan masuk!";
	}
	else
	{
		system("cls");
		cout << "Hai " << nama << "! Sayangnya Anda tidak diperbolehkan masuk!";

		if (umur <= 10) {
			system("cls");
			cout << "Hai " << nama << "! Anak KICIK gaboleh masukk yaaa, pulang aja sana PULANGGG!!, PULANG GA LOEEE???!!!!";
		}
	}
	this_thread::sleep_for(chrono::seconds(10));
}

void tugas2() {
	int nilaiAgus, nilaiAmel;

	cout << "PENILAIAN\nMasukkan Nilai di nama bawah ini\n";
	cout << "Agus Nilai Total : ";
	cin >> nilaiAgus;
	cout << "Amel Nilai Total : ";
	cin >> nilaiAmel;

	if (nilaiAgus < nilaiAmel) {
		system("cls");
		cout << "Nilai Total Agus : " << nilaiAgus << "\nNilai Total Amel : " << nilaiAmel << "\n";
		cout << "AGUS NANGIS, DAN DIKABARKAN DIBULY OLEH AMEL";
	}
	else
	{
		system("cls");
		cout << "Nilai Total Agus : " << nilaiAgus << "\nNilai Total Amel : " << nilaiAmel << "\n";
		cout << "AGUS PAMER KE AMEL, AMEL NGEREOG...";
	}
	this_thread::sleep_for(chrono::seconds(10));
}

void tugas1() {

	int umur;

	cout << "SELAMAT DATANG DI BIOSKOP FILM DEWASA HEHE\nSILAHKAN INPUTKAN UMUR ANDA DIBAWAH (YANG JUJUR YAA!)\n";
	cin >> umur;
	if (umur > 17) {
		system("cls");
		cout << "ANDA BOLEH MASUK, SELAMAT MENONTON!...";
	}
	else {
		system("cls");
		cout << "ANDA TIDAK BOLEH MASU, PIGI SANA PIGI!!";
	}
	this_thread::sleep_for(chrono::seconds(10));
}

int main() {
	int nomorSoal;

	cout << "HALO SELAMAT DATANG DI PROGRAM ISENG BUATAN DEEOGIKK XI RPL 2024\n";
	cout << "PILIH PROGRAM [1, 2, 3, 4]\n";
	cin >> nomorSoal;

	switch (nomorSoal)
	{
		case 1:
			system("cls");
			tugas1();
			break;
		case 2:
			system("cls");
			tugas2();
			break;
		case 3:
			system("cls");
			tugas3();
			break;
		case 4:
			system("cls");
			tugas4();
			break;
		case 5:
			system("cls");
			tugasTersembunyi();
			break;
	}

	return 0;
}