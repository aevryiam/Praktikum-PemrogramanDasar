#include<iostream>
using namespace std;

// Fungsi untuk mengisi array
void fillArray(int arr[], int n) {
    cout << "Enter elements of array" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Fungsi untuk mengakses elemen berdasarkan indeks
void accessElement(int arr[], int n, int l) {
    if (l >= 0 && l < n) {
        cout << "Element present at index " << l << " is " << arr[l] << endl;
    } else {
        cout << "Invalid index! Please enter a valid index between 0 and " << n-1 << endl;
    }
}

// Fungsi untuk mencari elemen dalam array
void searchElement(int arr[], int n, int k) {
    int ans = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == k) {
            ans = i;
            break;
        }
    }
    if(ans != -1)
        cout << "The element " << k << " is present at index " << ans << endl;
    else
        cout << "The element " << k << " is not there in the array" << endl;
}

int main() {
    int n, l, k;
    
    cout << "Enter size of array" << endl;
    cin >> n;
    
    int arr[n];
    
    // Memanggil fungsi untuk mengisi array
    fillArray(arr, n);
    
    // Mengakses elemen berdasarkan indeks
    cout << "Accessing element at index. Enter the index: ";
    cin >> l;
    accessElement(arr, n, l); // Memanggil fungsi accessElement
    
    // Mencari elemen dalam array
    cout << "Enter element to be searched: ";
    cin >> k;
    searchElement(arr, n, k); // Memanggil fungsi searchElement
    
    return 0;
}
