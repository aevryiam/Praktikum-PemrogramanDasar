#include <iostream>
using namespace std;

int main(){
    float pi = 3.14;
    float r;
    float luas_lingkaran;

    cout << "Masukkan nilai jari-jari lingkaran : \n";
    cin >> r;
    luas_lingkaran = pi * r * r;
    cout << "Luas lingkarannya adalah :" << luas_lingkaran;

    return 0;
}
