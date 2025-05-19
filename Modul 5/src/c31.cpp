#include <iostream>
#include <string>

using namespace std;

int main() {
    string nim;
    cout << "Masukkan NIM (format: 24/539979/TK/59890): ";
    getline(cin, nim);

    size_t pos1 = nim.find('/');
    size_t pos2 = nim.find('/', pos1 + 1);
    size_t pos3 = nim.find('/', pos2 + 1);

    string angkatan = nim.substr(0, pos1);
    string niu = nim.substr(pos1 + 1, pos2 - pos1 - 1);
    string kode_fakultas = nim.substr(pos2 + 1, pos3 - pos2 - 1);
    string nif = nim.substr(pos3 + 1);

    cout << "\n=== Hasil Pemisahan NIM ===\n";
    cout << "Angkatan       : " << angkatan << endl;
    cout << "NIU            : " << niu << endl;
    cout << "Kode Fakultas  : " << kode_fakultas << endl;
    cout << "NIF            : " << nif << endl;

    return 0;
}