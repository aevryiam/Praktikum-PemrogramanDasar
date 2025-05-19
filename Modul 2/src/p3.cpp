#include <iostream>
using namespace std;

int main(){
	int Bil1, Bil2;
	cout << "Input angka 1: ";
	cin >> Bil1;
	cout << "Input angka 2: ";
	cin >> Bil2;
	
	if(Bil1 == Bil2){
		cout << "Angka 1 -> " << Bil1 << " = " << Bil2 << " <- Angka 2" <<endl;
	} else if ( Bil1 > Bil2){
		cout << "Angka 1 -> " << Bil1 << " > " << Bil2 << " <- Angka 2" <<endl;
	} else {
		cout << "Angka 1 -> " << Bil1 << " < " << Bil2 << " <- Angka 2" <<endl;
	}
	return 0;
}