#include <iostream>
using namespace std;

// main method
int main()
{
	// deklarasi variabel
	int x = 7, y = 5, z = 3;
	
	// proses studi kasus intruksi Z = Y
	z = y;
	cout << "=== Studi kasus intruksi Z = Y ===" << endl;
	cout << "hasilnya: " << z << endl;
	
	// proses studi kasus intruksi Z = Z + X
	z = z + x;
	cout << "=== Studi kasus intruksi Z = Z + X ===" << endl;
	cout << "hasilnya: " << z << endl;
	
	// proses studi kasus intruksi Z = Z - X * Y
	z = z - x * y;
	cout << "=== Studi kasus intruksi Z = Z - X * Y ===" << endl;
	cout << "hasilnya: " << z  << endl;
	
	// proses studi kasus intruksi Z = X % Y
	z = x % y;
	cout << "=== Studi kasus intruksi Z = X % Y ===" << endl;
	cout << "hasilnya: " << z;
	
	// akhiri program ini
	return 0;
}


