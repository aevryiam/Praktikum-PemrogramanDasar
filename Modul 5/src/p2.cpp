#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
		char angka[8]; // variabel angka untuk menyimpan angka bertipe data char
		int a; // variabel a bertipe data integer
		cout << "Masukkan karakter angka = " <<endl;
		cin.get(angka,8);
		a = atoi(angka); //variabel angka bertipe data char dikonversikan menjadi variabel a yang bertipe data int
		cout << "Angka dalam tipe character = " <<angka <<endl;
		cout << "Angka dalam tipe integer = " <<angka <<endl;
		return 0;
	}