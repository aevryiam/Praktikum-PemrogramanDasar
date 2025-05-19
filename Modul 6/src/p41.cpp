#include <iostream>
using namespace std;

int main() {
    int A[5][5], i, j, k, l; // Declaration of array A and indices
    i = 0; // Initialization of row index
    
    // Populating array using nested while loops
    while (i < 5) {
        j = 0; // Initialize column index
        while (j < 5) {
            A[i][j] = i + 100; // Assign values to array elements
            j++;
        }
        i++;
    }

    cout << "Indeks\t\t" << "Nilai Elemen\t" << "Alamat" << endl;

    // Displaying array data using nested while loops
    k = 0; // Initialize row index for display
    while (k < 5) {
        l = 0; // Initialize column index for display
        while (l < 5) {
            cout << "[" << k << "][" << l << "]"
                 << "\t\t" << A[k][l]
                 << "\t\t\t\t" << &A[k][l] << endl;
            l++;
        }
        k++;
    }

    return 0;
}