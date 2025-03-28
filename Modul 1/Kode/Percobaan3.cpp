#include <iostream> 
using namespace std;

int main() 
{ 
    int first_number, second_number, result; 
    cout << "Masukkan angka pertama : "; 
    cin >> first_number; 
    cout << "Masukkan angka kedua : "; 
    cin >> second_number; 
    result = first_number++ * second_number++; 
    cout << "Hasil = " << result << endl; 
    return 0; 
}