#include <iostream>
using namespace std;

int main() {
    int jumlahTeman;
    double diskon;

    // Input jumlah teman
    do {
        cout << "Masukkan jumlah teman (1 < jumlah teman <= 999999): ";
        cin >> jumlahTeman;
    } while (jumlahTeman <= 1 || jumlahTeman > 999999);

    // Input persentase diskon
    do {
        cout << "Masukkan persentase diskon (1 < n < 50): ";
        cin >> diskon;
    } while (diskon <= 1 || diskon >= 50);

    double pesanan[jumlahTeman];
    double totalHarga = 0;

    // Input tagihan masing-masing teman
    for (int i = 0; i < jumlahTeman; ++i) {
        double tagihan;
        do {
            cout << "Masukkan tagihan teman ke-" << (i + 1) << " (>= 1000): ";
            cin >> tagihan;
        } while (tagihan < 1000);
        pesanan[i] = tagihan;
        totalHarga += tagihan;
    }

    // Menghitung total diskon dan total harga setelah diskon
    double totalDiskon = totalHarga * (diskon / 100);
    double totalHargaSetelahDiskon = totalHarga - totalDiskon;

    // Menampilkan tagihan masing-masing teman setelah diskon
    for (int i = 0; i < jumlahTeman; ++i) {
        double diskonTeman = pesanan[i] * (diskon / 100);
        double tagihanAkhir = pesanan[i] - diskonTeman;
        cout << "Tagihan teman ke-" << (i + 1) << " setelah diskon: " << tagihanAkhir << endl;
    }

    // Menampilkan total diskon yang didapat
    cout << "Diskon yang didapat: " << totalDiskon << endl;

    return 0;
}
