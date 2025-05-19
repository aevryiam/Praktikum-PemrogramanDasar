#include <iostream>
#include <cmath>
using namespace std;

// Fungsi 1: Input data
void inputData(double &diameter) { // parameter formal
    cout << "Masukkan diameter bola: ";
    cin >> diameter; // parameter aktual
}

// Fungsi 2: Hitung luas dan volume
void hitungBola(double diameter, double &luas, double &volume) {
    double jariJari = diameter / 2.0; // variabel lokal
    luas = 4 * M_PI * pow(jariJari, 2);
    volume = (4.0 / 3.0) * M_PI * pow(jariJari, 3);
}

// Fungsi 3: Cetak hasil
void cetakHasil(double diameter, double luas, double volume) {
    cout << "Diameter bola: " << diameter << endl;
    cout << "Luas permukaan bola: " << luas << endl;
    cout << "Volume bola: " << volume << endl;
}

int main() {
    double diameter, luas, volume;

    inputData(diameter);               // parameter aktual
    hitungBola(diameter, luas, volume); // parameter aktual
    cetakHasil(diameter, luas, volume); // parameter aktual

    return 0;
}