#include <iostream>

using namespace std;

int main(){
    int value1, value2, buff;
    cout << "Masukkan angka 1:";
    cin >> value1;
    cout << "Masukkan angka 2:";
    cin >> value2;
    if(value1 > value2) {
        buff = value1;
        value1 = value2;
        value2 = buff;
    }
    cout << "angka 1:" << value1 <<endl;
    cout << "angka 2:" << value2 <<endl;
    return 0;
}