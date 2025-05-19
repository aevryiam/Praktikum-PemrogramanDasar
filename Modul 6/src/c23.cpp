#include<iostream>
using namespace std;

// declare functions
double add(double arr[], int size);
double avg(double sum, int n);

// main function
int main()
{
    // declare variables
    double numbers[3];  // Array untuk menampung tiga angka
    double sum, average;
    
    // take input from end-user
    cout << "Enter three Numbers : ";
    for (int i = 0; i < 3; i++) {
        cin >> numbers[i];  // Input angka ke dalam array
    }

    // calculate sum value
    sum = add(numbers, 3);  // Menghitung jumlah angka dalam array

    // calculate average value
    average = avg(sum, 3);  // Menghitung rata-rata

    // display result
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

// function to add the numbers in the array
double add(double arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Menambahkan semua elemen array
    }
    return sum;
}

// function to calculate average of n number
double avg(double sum, int n)
{
    return sum / n;
}
