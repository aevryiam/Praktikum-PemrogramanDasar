#include <iostream>
using namespace std;

int main() 
{ 
    int alas, tinggi, luas; 
    cout << "Masukkan alas segitiga : "; 
    cin >> alas; 
    cout << "Masukkan tinggi segitiga : "; 
    cin >> tinggi; 
    luas = (alas * tinggi) / 2; 
    cout << "Luas segitiga = " << luas << endl; 
    return 0; 
}