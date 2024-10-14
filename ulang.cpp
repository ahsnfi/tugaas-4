#include <iostream>
using namespace std;

int main() {
	int n, data, jumGenap = 0, jumGanjil = 0;
	// meminta jumlah data yang akan diinput
	cout << "masukan jumlah data: ";
	cin >> n;

	// loop untuk menerima input dan menghitung jumlah ganjil dan genap
	for (int i = 1; i <= n; i++) {
		cout << "msukan data ke-" << i << ":";
		cin >> data;

		// mengecek apakah bilangan genap atau ganjil
		if (data % 2 == 0) {
			jumGenap += data;
		}
		else {
			jumGanjil += data;
		}
	}

	// menampilkan hasil jumlah bilangan ganjil dan genap
	cout << "jumlahh total bilangan ganjil: " << jumGanjil << endl;
	cout << "jumlah total bilangan genap: " << jumGenap << endl;

	return 0;
}