#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk mencetak matriks
void printMatrix(vector<vector<double>>& matrix) {
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Fungsi untuk mencetak segitiga bawah matriks
void printLowerTriangle(vector<vector<double>>& matrix) {
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            if (j > i) {
                cout << "\t";
            } else {
                cout << matrix[i][j] << "\t";
            }
        }
        cout << endl;
    }
}

// Fungsi untuk mencetak diagonal matriks
void printDiagonal(vector<vector<double>>& matrix) {
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            if (i == j) {
                cout << matrix[i][j] << "\t";
            } else {
                cout << "\t";
            }
        }
        cout << endl;
    }
}

// Fungsi untuk mendapatkan matriks identitas
vector<vector<double>> identityMatrix(int n) {
    vector<vector<double>> identity(n, vector<double>(n, 0));
    for (int i = 0; i < n; ++i) {
        identity[i][i] = 1;
    }
    return identity;
}

// Fungsi untuk mendapatkan matriks invers
vector<vector<double>> matrixInverse(vector<vector<double>>& matrix) {
    // Hanya contoh implementasi sederhana
    // Untuk matriks 5x6, invers mungkin tidak ada atau bukan unik
    cout << "Matriks 5x6 tidak memiliki invers yang unik." << endl;
    return {};
}

int main() {
    const int rows = 5;
    const int cols = 6;
    cout << "Masukkan elemen matriks 5x6: \n";
    vector<vector<double>> matrix(rows, vector<double>(cols));
    for (int i = 0; i < rows; ++i) {
        cout << "Baris ke-" << i + 1 << ": ";
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatriks yang dimasukkan:\n";
    printMatrix(matrix);

    cout << "\nMatriks invers: \n";
    vector<vector<double>> inverse = matrixInverse(matrix);
    // Jika ingin mengimplementasikan fungsi untuk menghitung invers, bisa dimasukkan di sini

    cout << "\nSegitiga Bawah dari matriks: \n";
    printLowerTriangle(matrix);

    cout << "\nDiagonal dari matriks: \n";
    printDiagonal(matrix);

    return 0;
}
