#include<iostream>
using namespace std;

int main() {
    int s[6][4]; // Menggunakan array untuk 6 angkatan dan 4 data SKS per angkatan
    int i = 0, j;

    cout << "\nMasukkan SKS Mahasiswa untuk 6 Angkatan dimulai dari angkatan 1990\n";

    // Input data menggunakan while loop
    while (i < 6) {
        cout << "\n Angkatan " << 1990 + i << "\t";
        j = 0; // Reset nilai j untuk setiap angkatan
        while (j < 4) {
            cout << "\nSKS Mahasiswa [" << i << "][" << j << "] = ";
            cin >> s[i][j];
            j++;
        }
        i++;
    }

    cout << endl;
    cout << "\nTampilkan data SKS Mahasiswa untuk 6 Angkatan\n";
    cout << "\n Angkatan\t\t" << "SKS";

    i = 0; // Reset nilai i untuk output
    // Output data menggunakan while loop
    while (i < 6) {
        cout << "\n " << 1990 + i << "\t";
        j = 0; // Reset nilai j untuk setiap angkatan
        while (j < 4) {
            cout << "\t" << s[i][j];
            j++;
        }
        cout << endl;
        i++;
    }
}