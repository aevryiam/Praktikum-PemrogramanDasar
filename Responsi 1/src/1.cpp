#include <iostream>
#include <array>
#include <cmath>
 
using namespace std;
 
const int JUMLAH_TITIK = 10;
typedef array<double, 3> Titik;
 
double hitungJarak(Titik A, Titik B) {
    double total = 0;
    for (int i = 0; i < 3; ++i)
        total += pow(A[i] - B[i], 2);
    return sqrt(total);
}
 
int main() {
    ios::sync_with_stdio(false);
 
    Titik acuan = {6, 7, 8};
    Titik daftarTitik[JUMLAH_TITIK];
 
    cout << "Masukkan koordinat untuk setiap titik:\n";
    for (int i = 0; i < JUMLAH_TITIK; ++i) {
        cout << "Titik ke-" << i << ": ";
        for (int j = 0; j < 3; ++j)
            cin >> daftarTitik[i][j];
    }
 
    double jarak[JUMLAH_TITIK];
    for (int i = 0; i < JUMLAH_TITIK; ++i)
        jarak[i] = hitungJarak(daftarTitik[i], acuan);
 
    for (int i = 0; i < JUMLAH_TITIK; ++i) {
        cout << "Jarak dari titik ke-" << i << " ke titik acuan (" 
             << acuan[0] << ", " << acuan[1] << ", " << acuan[2] 
             << "): " << jarak[i] << '\n';
    }
 
    return 0;
}