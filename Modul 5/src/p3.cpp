#include <iostream>
#include <string>
using namespace std;

int main(){
	string nama;
	int ukur, ukur2;
	cout << "Masukkan namamu:" <<endl;
	getline(cin,nama);
	cout << "Nama yang dimasukkan: " << nama <<endl;
	ukur = nama.size();
	cout << "Ukuran dari string nama dengan perintah size : " << ukur <<endl;
	ukur2 = nama.length();
	cout << "Ukuran dari string nama dengan perintah lenght : " << ukur2 <<endl;
}