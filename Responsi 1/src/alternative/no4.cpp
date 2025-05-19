#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, *pa, *pb;
    int sum, absDifference;

    cout << "Input a dan b (pisah dengan space): ";
    cin >> a >> b;

    if (a < 1 || a > 99 || b < 1 || b > 99 || a > b) {
        cout << "Input tidak valid. a dan b harus memenuhi 1 <= a <= b <= 99." << endl;
        return 1;
    }

    pa = &a;
    pb = &b;
    sum = abs(*pa + *pb); // |a + b|
    absDifference = abs(*pa - *pb); // |a - b|

    cout << "|a + b| : " << sum << endl;
    cout << "|a - b| : " << absDifference << endl;

    return 0;
}
