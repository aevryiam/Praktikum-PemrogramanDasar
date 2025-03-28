#include <iostream>
using namespace std;

int main(){
    float pi = 3.14;
    float r, t;
    float volume_tabung, volume_kerucut;

    cout << "Masukkan nilai jari-jari : \n";
    cin >> r;
    cout << "Masukkan nilai tinggi : \n";
    cin >> t;
    volume_tabung = pi * r * r * t;
    volume_kerucut = volume_tabung / 3;
    cout << "Volume tabungnya adalah :" << volume_tabung << endl;
    cout << "Volume kerucutnya adalah :" << volume_kerucut << endl;

    return 0;
}