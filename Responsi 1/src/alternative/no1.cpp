#include <iostream> 
#include <array>
#include <cmath>

using namespace std;

const int maxn = 10;
typedef array<double, 3> Point;

double distance(Point A, Point B) { 
    double sum = 0;
    for (int i = 0; i < 3; ++i)
        sum += (A[i] - B[i]) * (A[i] - B[i]); 
    return sqrt(sum);
}

int main() {
    ios_base::sync_with_stdio(0);

    Point query {6, 7, 8};
    Point v[maxn];

    // Input titik-titik
    cout << "Masukkan koordinat titik-titik:\n";
    for (int i = 0; i < maxn; ++i) {
        cout << "Titik " << i << ": ";
        for (int j = 0; j < 3; ++j)
            cin >> v[i][j];
    }
            
    // Menghitung jarak tiap titik ke query 
    double arr[maxn];
    for (int i = 0; i < maxn; ++i)
        arr[i] = distance(v[i], query);

    // Menampilkan hasil
    for (int i = 0; i < maxn; ++i) {
        cout << "Jarak titik " << i << " dengan (" << query[0] << ", ";
        cout << query[1] << ", " << query[2] << "): " << arr[i] << '\n';
    }
    
    return 0;
}
