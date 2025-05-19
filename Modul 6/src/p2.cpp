#include <iostream>
using namespace std;
int main () {
	
	int A[5], i, j; // deklarasi array A bertipe integer dan memiliki ukuran 5 (memiliki 5 elemen)
// initialisasi indeks dari array A dari indeks 0 nilai array dan indeks selanjutnya bertambahan dengan 1
	for ( int i = 0; i < 5; i++ ) {
// mengeset elemen dari array A[0] bernilai 100 dan nilai array selanjutnya bertambahan dengan 1
	A[i] = i + 100;
	}
	cout << "Indeks\t\t"<< "Nilai Elemen\t" << "Alamat"<<endl;
// menampilkan indeks dan nilai dari tiap elemen array A serta lokasi alamat memorinya
	for ( int j = 0; j < 5; j++ ) {
	cout << j <<"\t\t\t"<<A[ j ]<<"\t\t\t\t"<<&A[j] << endl;
	}
}