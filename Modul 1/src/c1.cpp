#include <iostream>
using namespace std;

int main(){
    float *pcel, *pfah, fah, cel;
    pcel = &cel; // ditambahkan & sebelum cel sebagai penanda addressnya bahwa pcel address dari cel
    pfah = &fah; // ditambahkan & sebelum fah sebagai penanda addressnya bahwa pfah address dari fah

    cout << "Masukkan suhu dalam Fahrenheit :";
    cin >> *pfah; // menghapus * karena tidak mengubah value (ini input value), alasan lainnya sama kayak alasan line 11
    *pcel = (*pfah - 32) * 5 / 9; // menghapus * karena cel itu makenya *pcel bukan *cel
    cout << "Suhu dalam celcius adalah :" << cel << endl;

    return 0;
}