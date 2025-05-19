#include <iostream>
using namespace std;

int main(){
	int gaji;
	float tahun;
	string yn;
	cout << "Masukkan besar gaji (per 1000$): ";
	cin >> gaji;
	if (gaji > 70){
		cout << " Apakah ada catatan kriminal ? :";
		cin >> yn;
		if ( yn == "yes"){
			cout << "no loan";
		} else if ( yn == "no") {
			cout << "loan";
		}
	} else if ( gaji >= 30 && gaji <= 70){
		cout << "Sudah berapa lama bekerja ? :";
		cin >> tahun;
		if (tahun > 5){
			cout << "loan";
		} else if (tahun >= 1 && tahun <= 5){
			cout << "Membayar kartu kredit ? :";
			cin >> yn;
			if ( yn == "yes"){
			cout << "loan";
			} else if ( yn == "no") {
			cout << "no loan";
			}
		} else {
			cout << "no loan";
		}
	} else {
		cout << " Apakah ada catatan kriminal ? :";
		cin >> yn;
		if ( yn == "yes"){
			cout << "loan";
		} else if ( yn == "no") {
			cout << "no loan";
		}
	}
	return 0;
}