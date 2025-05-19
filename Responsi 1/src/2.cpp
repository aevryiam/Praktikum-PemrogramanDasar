#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk memecah dan mencetak digit-digit angka dalam urutan yang benar
void printDigits(int number) {
    vector<int> digits;

    int original = number;
    while (number > 0) {
        digits.push_back(number % 10);
        number /= 10;
    }

    cout << "Digit-digit dari angka " << original << " adalah: ";
    for (auto it = digits.rbegin(); it != digits.rend(); ++it)
        cout << *it << " ";
    cout << '\n';
}

// Fungsi untuk mengecek apakah angka habis dibagi 9
bool isDivisibleBy9(int number) {
    return number % 9 == 0;
}

int main() {
    const int digit[] = {154368, 421594, 123456};
    const int size = sizeof(digit) / sizeof(digit[0]);

    for (int i = 0; i < size; ++i) {
        int number = digit[i];

        printDigits(number);

        cout << "Angka " << number
             << (isDivisibleBy9(number) ? " habis" : " tidak habis")
             << " dibagi 9.\n\n";
    }

    return 0;
}