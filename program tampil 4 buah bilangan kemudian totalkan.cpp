#include <iostream>
using namespace std;

// main method
int main()
{
	// deklarasi variabel
	int angka1, angka2, angka3, angka4, hasil;
	
	// ambil inputan dari user
	cout << "Masukan angka ke 1: ";
	cin >> angka1;
	cout << "Masukan angka ke 2: ";
	cin >> angka2;
	cout << "Masukan angka ke 3: ";
	cin >> angka3;
	cout << "Masukan angka ke 4: ";
	cin >> angka4;
	
	// tampilkan angka yang sudah dimasukan oleh user
	cout << "angka ke 1: " << angka1 << endl;
	cout << "angka ke 2: " << angka2 << endl;
	cout << "angka ke 3: " << angka3 << endl;
	cout << "angka ke 4: " << angka4 << endl;
	
	// total atau jumlahkan angka inputan dari user
	hasil = angka1 + angka2 + angka3 + angka4;
	
	// output hasil yang sudah ditotal atau jumlahkan
	cout << "Hasil dari total 4 angka yang anda masukan: " << hasil;
	
	// akhiri program ini
	return 0;
}


