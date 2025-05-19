#include<iostream>
using namespace std;

// struct declaration outside main()
struct
{
    int roll, age;
    string name;
} vr[4];

int main()
{
    int i, j, k, maxAge, indexMax;

    for (i = 0; i < 4; i++)
    {
        cout << "Enter " << i + 1 << " Student Record\n";
        cout << "Enter Roll no: ";
        cin >> vr[i].roll;
        cout << "Enter age: ";
        cin >> vr[i].age;
        cout << "Enter Name: ";
        cin >> vr[i].name;
    }

    cout << endl;
    for (j = 0; j < 4; j++)
    {
        cout << "\nDisplay " << j + 1 << " Student Record";
        cout << "\nRoll no.: " << vr[j].roll;
        cout << "\nAge: " << vr[j].age;
        cout << "\nName: " << vr[j].name << endl;
    }

    maxAge = vr[0].age;
    indexMax = 0; // Simpan index siswa dengan umur maksimum

    for (k = 1; k < 4; k++)
    {
        if (vr[k].age > maxAge)
        {
            maxAge = vr[k].age;
            indexMax = k; // Update index siswa tertua
        }
    }

    cout << "\nThe oldest student's age is: " << maxAge << endl;
    cout << "The oldest student is: " << vr[indexMax].name << endl;

    return 0;
}
