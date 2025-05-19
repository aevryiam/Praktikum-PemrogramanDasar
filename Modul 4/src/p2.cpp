#include <iostream>
 using namespace std;
 struct Produk {
	int kode;
	float harga;
 } peg1, peg2, peg3, peg4;
 
 int main() {
	cout << "Masukkan Produk Pertama : \n";
	cout << "Masukkan kode Produk : \n";
	cin>> peg1.kode;
	cout << "Masukkan harga : \n";
	cin >> peg1.harga;
	cout << "Masukkan Produk Kedua: \n";
	cout << "Masukkan kode Produk : \n";
	cin>> peg2.kode;
	cout << "Masukkan harga : \n";
	cin >> peg2.harga;
	cout << "Masukkan Produk Ketiga : \n";
	cout << "Masukkan kode Produk : \n";
	cin>> peg3.kode;
	cout << "Masukkan harga : \n";
	cin >> peg3.harga;
	cout << "Masukkan Produk Keempat : \n";
	cout << "Masukkan kode Produk : \n";
	cin>> peg4.kode;
	cout << "Masukkan harga : \n";
	cin >> peg4.harga;
	 
	 
	cout << "\nTampilkan Information Produk Pertama" << endl;
	cout << "Kode: " << peg1.kode << endl;
	cout << "Harga: " << peg1.harga;
	cout << "\nTampilkan Information Produk Kedua" << endl;
	cout << "Kode: " << peg2.kode << endl;
	cout << "Harga: " << peg2.harga;
	cout << "\nTampilkan Information Produk Ketiga" << endl;
	cout << "Kode: " << peg3.kode << endl;
	cout << "Harga: " << peg3.harga;
	cout << "\nTampilkan Information Produk Keempat" << endl;
	cout << "Kode: " << peg4.kode << endl;
	cout << "Harga: " << peg4.harga;
	 
	return 0;
 }