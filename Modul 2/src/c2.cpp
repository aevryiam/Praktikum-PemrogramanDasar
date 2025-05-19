#include <iostream>
using namespace std;

int main(){
	float p, l, t, r, volume; //jika nilai yang dimasukkan bukan bilangan bulat
	const float pi = 3.14;
	int pilihan;
	cout << "Pilih bangun ruang yang ingin dihitung volumenya (input pilihannya saja) :\n";
	cout << " 1. Persegi/Kubus\n 2. Tabung\n 3. Kerucut\n";
	cin >> pilihan;
	
	switch(pilihan){
		case 1:
			cout << "Input Panjang, Lebar, dan Tinggi :\n";
			cin >> p >> l >> t;
			volume = p*l*t;
			cout << "Volumenya adalah : " << volume;
			break;
		
		case 2:
			cout << "Input Jari-jari dan tinggi Tabung :\n";
			cin >> r >> t;
			volume = r*r*t*pi;
			cout << "Volumenya adalah : " << volume;
			break;
		
		case 3:
			cout << "Input Jari-jari dan tinggi Kerucut :\n";
			cin >> r >> t;
			volume = (r*r*t*pi)/3;
			cout << "Volumenya adalah : " << volume;
			break;
			
		default:
			cout << "Error! Pilihan tidak tersedia";
			break;
	}
	return 0;
}