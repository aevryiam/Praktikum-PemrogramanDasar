#include <iostream>
using namespace std;

int main() {
    int A[5][5], i, j, k, l; // Declaration of array A and indices
    i = 0; // Start index for row

    // Populating the array using nested do-while loops
    do {
        j = 0; // Start index for column
        do {
            A[i][j] = i + 100; // Assign values to array elements
            j++;
        } while (j < 5);
        i++;
    } while (i < 5);

    cout << "Indeks\t\t" << "Nilai Elemen\t" << "Alamat" << endl;

    // Displaying the array data using nested do-while loops
    k = 0; // Start index for row in display
    do {
        l = 0; // Start index for column in display
        do {
            cout << "[" << k << "][" << l << "]"
                 << "\t\t" << A[k][l]
                 << "\t\t\t\t" << &A[k][l] << endl;
            l++;
        } while (l < 5);
        k++;
    } while (k < 5);

    return 0;
}