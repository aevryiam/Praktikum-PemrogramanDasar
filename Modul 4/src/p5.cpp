#include <iostream>
using namespace std;
union Mahasiswa{
    char nama[40];
    int angkatan;  
};
 
int main(){
    Mahasiswa mhs;
    cout<<"Masukkan Nama Mahasiswa :";
    cin.get(mhs.nama,40);
	cout<<"Masukkan Angkatan :";
    cin>>mhs.angkatan;
    cout<<"Data Mahasiswa"<<endl;
    cout<<"Nama :"<<mhs.nama<<endl;
    cout<<"Angkatan :"<<mhs.angkatan<<endl;
	
	count<<"Alokasi memori untuk elemen nama : "  <<&mhs.nama<<endl;
	count<<"Alokasi memori untuk elemen angkatan : "  <<&mhs.nama<<endl;
	count<<"Ukuran dari variabel union : "  << sizeof(mhs)<<endl;
	
	return 0;
 }