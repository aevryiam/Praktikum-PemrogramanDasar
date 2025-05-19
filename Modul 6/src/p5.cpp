#include<iostream>
using namespace std;

int main(){
	int s[3][3];
	int i, j;
	cout<<"\nMasukkan sks Mahasiswa untuk 3 Angkatan yang berbeda \n";
	for(i=0;i<3;i++){
		cout<<"\n Angkatan 202"<<i<<"\t";
		for(j=0;j<3;j++){
			cout<<"\nsks Mahasiswa ["<<i<<"]["<<j<<"]= ";
			cin>>s[i][j];
		}
	}
	cout<<endl;
	cout<<"\nTampilkan data sks Mahasiswa 3 Angkatan\n";
	cout<<"\n Angkatan\t\t"<<"sks";
	for(i=0;i<3;i++){
		cout<<"\n 202"<<i<<"\t";
		for(j=0;j<3;j++){
			cout<<"\t"<<s[i][j];
		}
		cout<<endl;
	}
}