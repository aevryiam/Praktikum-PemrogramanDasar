#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int inputJumlahTeman() {
    int jumlah;
    do {
        cout << "Masukkan jumlah teman (1 < jumlah teman <= 999999): ";
        cin >> jumlah;
    } while (jumlah <= 1 || jumlah > 999999);
    return jumlah;
}

double inputPersentaseDiskon() {
    double diskon;
    do {
        cout << "Masukkan persentase diskon (1 < n < 50): ";
        cin >> diskon;
    } while (diskon <= 1 || diskon >= 50);
    return diskon;
}

vector<double> inputTagihanTeman(int jumlahTeman) {
    vector<double> tagihan(jumlahTeman);
    for (int i = 0; i < jumlahTeman; ++i) {
        double nilai;
        do {
            cout << "Masukkan tagihan teman ke-" << (i + 1) << " (>= 1000): ";
            cin >> nilai;
        } while (nilai < 1000);
        tagihan[i] = nilai;
    }
    return tagihan;
}

void tampilkanTagihanSetelahDiskon(const vector<double>& tagihan, double diskon) {
    double total = 0;
    double totalDiskon = 0;

    cout << fixed << setprecision(2);

    for (int i = 0; i < tagihan.size(); ++i) {
        double potongan = tagihan[i] * (diskon / 100);
        double akhir = tagihan[i] - potongan;
        cout << "Tagihan teman ke-" << (i + 1) << " setelah diskon: " << akhir << endl;
        total += tagihan[i];
        totalDiskon += potongan;
    }

    cout << "Diskon total yang didapat: " << totalDiskon << endl;
    cout << "Total harga setelah diskon: " << total - totalDiskon << endl;
}

int main() {
    int jumlahTeman = inputJumlahTeman();
    double diskon = inputPersentaseDiskon();
    vector<double> tagihan = inputTagihanTeman(jumlahTeman);
    tampilkanTagihanSetelahDiskon(tagihan, diskon);

    return 0;
}
