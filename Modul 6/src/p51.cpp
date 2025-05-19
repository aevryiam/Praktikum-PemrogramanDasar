#include<iostream>
using namespace std;

int main() {
    int s[6][4]; // Mengubah ukuran array menjadi 6x4
    int i, j;
    cout << "\nMasukkan SKS Mahasiswa untuk 6 Angkatan dimulai dari angkatan 1990\n";
    for(i = 0; i < 6; i++) {
        cout << "\n Angkatan " << 1990 + i << "\t";
        for(j = 0; j < 4; j++) {
            cout << "\nSKS Mahasiswa [" << i << "][" << j << "] = ";
            cin >> s[i][j];
        }
    }
    cout << endl;
    cout << "\nTampilkan data SKS Mahasiswa untuk 6 Angkatan\n";
    cout << "\n Angkatan\t\t" << "SKS";
    for(i = 0; i < 6; i++) {
        cout << "\n " << 1990 + i << "\t";
        for(j = 0; j < 4; j++) {
            cout << "\t" << s[i][j];
        }
        cout << endl;
    }
}