#include <iostream>
using namespace std;

int main () {
	int A[5][5], i, j, k,l; // deklarasi array A bertipe integer dan memiliki ukuran baris 5 dan kolom 5
// inisialisasi indeks dari array A dimulai dari indeks [0][0]
	for ( int i = 0; i < 5; i++ ){
		for ( int j = 0; j < 5; j++ )
// set nilai elemen dimulai dari array A[0]0], baris ke 0 akan diset ke nilai 100 selanjutnya kenaikan baris akan bertambah 1
		A[i][j] = i+100;
	}

	cout << "Indeks\t\t"<< "Nilai Elemen\t" << "Alamat"<<endl;
// menampilkan indeks dan nilai dari tiap elemen array A serta lokasi alamat memorinya
	for ( int k = 0; k < 5; k++ ){
		for ( int l = 0; l < 5; l++ )
		cout << "["<<k<<"]"<<"["<<l<<"]"<<"\t\t"<<A[k][l]<<"\t\t\t\t"<<&A[k][l]<< endl;
	}
}