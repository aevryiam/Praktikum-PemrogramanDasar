#include<iostream>
using namespace std;

int main() {
    int myarray[5]; // Array 5 elemen

    cout << "Masukkan 5 angka:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> myarray[i];
    }

    cout << "\nInput list adalah:\n";
    for (int i = 0; i < 5; i++) {
        cout << myarray[i] << "\t";
    }

    // Proses insertion sort
    for (int k = 1; k < 5; k++) {
        int temp = myarray[k];
        int j = k - 1;
        while (j >= 0 && temp <= myarray[j]) {
            myarray[j + 1] = myarray[j];
            j = j - 1;
        }
        myarray[j + 1] = temp;
    }

    cout << "\nOutput list setelah diurutkan:\n";
    for (int i = 0; i < 5; i++) {
        cout << myarray[i] << "\t";
    }
    cout << endl;

    return 0;
}
