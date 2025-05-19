#include <iostream>
using namespace std;
typedef struct mahasiswa{
    typedef char x; 
    typedef int y;
	x nama[40]; // modifikasi x menjadi nama
	y angkatan; // modifikasi y menjadi angkatan
}mhs;
 
int main(){
  mhs aku;
  cout << "Masukkan Nama Mahasiswa : ";
  cin.get(aku.nama,40);
  cout << "Masukkan Angkatan :"<<endl;
  cin >> aku.angkatan;
  cout << "Data Mahasiswa"<<endl;
  cout << "Nama :"<< aku.nama <<endl;
  cout << "Angkatan :"<< aku.angkatan <<endl;
  
 return 0;
 }