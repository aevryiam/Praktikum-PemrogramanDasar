#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    const double G = 9.8;
    double H;

    cout << "Masukkan ketinggian awal (meter): ";
    cin >> H;

    double t = 0;
    double h = H;
    cout << "No\tWaktu (detik)\tKetinggian (meter)" << endl;

    int no = 1;
    while (h >= 0) {
        cout << no << "\t" << t << "\t\t" << fixed << setprecision(2) << h << endl;
        t += 1; // Increment time by 1 second
        h = H - 0.5 * G * pow(t, 2); // Corrected the formula for height
        no++;
    }

    double t_total = sqrt(2 * H / G);
    cout << "\nWaktu ketika benda sampai di atas tanah: " << fixed << setprecision(2) << t_total << " detik" << endl;
    return 0;
}
