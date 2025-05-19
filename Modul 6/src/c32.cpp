#include<iostream>
using namespace std;

// Fungsi untuk meng-inputkan array
void inputArray(int arr[], int size) {
    cout << "Input list is:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// Fungsi untuk mengurutkan array dan menampilkan hasilnya
void sortAndDisplay(int arr[], int size) {
    // Menampilkan array sebelum diurutkan
    cout << "Input list is" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // Mengurutkan array menggunakan Insertion Sort
    for (int k = 1; k < size; k++) {
        int temp = arr[k];
        int j = k - 1;
        while (j >= 0 && temp <= arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

    // Menampilkan array setelah diurutkan
    cout << "\nOutput list is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    int myarray[5];

    // Menginputkan array
    inputArray(myarray, 5);

    // Mengurutkan array dan menampilkan hasilnya
    sortAndDisplay(myarray, 5);

    return 0;
}
