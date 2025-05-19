#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;  // Ukuran matriks

    // Matriks diagonal
    cout << "\nDiagonal Matrix:" << endl;
    char diagonalMatrix[n][n];

    // Mengisi dan menampilkan matriks diagonal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                diagonalMatrix[i][j] = 'X';
            } else {
                diagonalMatrix[i][j] = ' ';
            }
            cout << diagonalMatrix[i][j] << " ";
        }
        cout << endl;
    }

    // Matriks segitiga bawah
    cout << "\nLower Triangular Matrix:" << endl;
    char lowerTriangularMatrix[n][n];

    // Mengisi dan menampilkan matriks segitiga bawah
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                lowerTriangularMatrix[i][j] = 'X';
            } else {
                lowerTriangularMatrix[i][j] = ' ';
            }
            cout << lowerTriangularMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
