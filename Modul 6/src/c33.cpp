#include<iostream>
using namespace std;

// Fungsi untuk menampilkan elemen matriks
void displayMatrix(int matrix[3][3], int rows, int cols) {
    cout << "Matrix elements are:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Fungsi untuk mencari nilai terkecil dalam matriks
void findMinElement(int matrix[3][3], int rows, int cols) {
    int minValue = matrix[0][0];
    int minRow = 0, minCol = 0;

    // Mencari nilai terkecil dan indeksnya
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < minValue) {
                minValue = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    // Menampilkan hasil
    cout << "The smallest value in the matrix is " << minValue << endl;
    cout << "It is located at index [" << minRow << "][" << minCol << "]" << endl;
}

int main() {
    int matrix[3][3] = {
        {12, 4, 7},
        {9, 1, 5},
        {6, 3, 8}
    };

    // Menampilkan elemen-elemen matriks
    displayMatrix(matrix, 3, 3);

    // Mencari nilai terkecil dan indeksnya
    findMinElement(matrix, 3, 3);

    return 0;
}
