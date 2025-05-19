#include <iostream>
using namespace std;

struct pegawai {
	char nama[20];
	int id;
	float gaji;
	char alamat[50];
	int umur;
};

int main (){
	pegawai pgw;
	cout << "Masukkan Nama: \n";
	cin.get (pgw.nama,20);
	cin.ignore();
	cout << "Masukkan id Pegawai: \n";
	cin >> pgw.id;
	cout << "Masukkan gaji: \n";
	cin >> pgw.gaji;
	cin.ignore();
	cout << "Masukkan alamat: \n";
	cin.get (pgw.alamat,50);
	cout << "Masukkan umur: \n";
	cin >> pgw.umur;
	
	cout << "\nTampilkan Information Pegawai" <<endl;
	cout << "Nama:" << pgw.nama <<endl;
	cout << "ID:" << pgw.id <<endl;
	cout << "Gaji:" <<pgw.gaji <<endl;
	cout << "Alamat:" <<pgw.alamat <<endl;
	cout << "Umur:" <<pgw.umur <<endl;
	
	return 0;
}