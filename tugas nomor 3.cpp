#include <iostream>
using namespace std;

// main method
int main()
{
	// deklarasi variabel
	int a = 5, b = 2, t;
	
	// proses studi kasus intruksi T = A
	t = a;
	cout << "=== Studi kasus intruksi T = A ===" << endl;
	cout << "hasilnya: " << t << endl;
	
	// proses studi kasus intruksi A = B
	a = b;
	cout << "=== Studi kasus intruksi A = B ===" << endl;
	cout << "hasilnya: " << a << endl;
	
	// proses studi kasus intruksi B = T
	b = t;
	cout << "=== Studi kasus intruksi B = T ===" << endl;
	cout << "hasilnya: " << b  << endl;
	
	// akhiri program ini
	return 0;
}


