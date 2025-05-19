#include <iostream>
#include <string>
using namespace std;

int main() {
    string kodeNegara, kodeKota, nomor;
    string nomorLengkap;

    cout << "Masukkan kode negara (misal 62): ";
    cin >> kodeNegara;
    cout << "Masukkan kode kota (misal 21): ";
    cin >> kodeKota;
    cout << "Masukkan nomor telepon: ";
    cin >> nomor;

    nomorLengkap = "+" + kodeNegara + "-" + kodeKota + "-" + nomor;
    cout << "Nomor telepon lengkap: " << nomorLengkap << endl;

    size_t pos1 = nomorLengkap.find("-");
    size_t pos2 = nomorLengkap.find("-", pos1 + 1);

    string nomorSaja = nomorLengkap.substr(pos2 + 1);
    cout << "Nomor telepon tanpa kode negara dan kota: " << nomorSaja << endl;

    return 0;
}