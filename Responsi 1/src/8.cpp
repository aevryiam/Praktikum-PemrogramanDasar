#include <iostream>

using namespace std;

int main(){
	int deret; 
	float a, b, sum, temp;
	
	cout << "Program Deret Matematika \n";
	cout << "Masukkan dimensi deret yang diinginkan \n";
	cin >> deret;
	cout << endl;
	
	for (int i=1; i <= deret; i++){
		a = 1 + (i-1)*2;
		b = 3 + (i-1)*2;
		temp = a/b;
		cout << a << "/" << b <<endl;
		sum = sum + temp;
	}
	cout << endl << "Hasil penjumlahan dari deret adalah : " << sum;
	return 0;
}