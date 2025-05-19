#include <iostream>
using namespace std;

void printDigit(int digit) {
    cout << "Digit digit dari angka: " << digit << " adalah : " << endl;
    int n = digit;
    int temp;
    while (n > 0) {
        temp = n % 10;
        cout << temp << " ";
        n = n / 10;
    }
    cout << endl;
}

int main() {
    int digit[] = {154368, 421594, 123456};
    int size = sizeof(digit) / sizeof(digit[0]);

    for (int i = 0; i < size; i++) {
        int number = digit[i];
        printDigit(number);

        if (number % 9 == 0) {
            cout << "angka " << number << " habis dibagi 9 ";
        } else {
            cout << "angka " << number << " tidak habis dibagi 9 ";
        }
        cout << endl;
    }

    return 0;
}