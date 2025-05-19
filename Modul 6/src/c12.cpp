#include <iostream>
#include <string>
using namespace std;

const int EMPLOYEE_COUNT = 3; // Ganti nama supaya tidak konflik

struct Employee {
    string name;
    int emp_no;
    float salary;
};

int main() {
    Employee emp[EMPLOYEE_COUNT];
    cout << "Masukkan Data Pegawai\n";

    for (int i = 0; i < EMPLOYEE_COUNT; i++) {
        cout << " Pegawai Nomor " << i + 1 << endl;
        cout << " Nama: ";
        cin.ignore();
        getline(cin, emp[i].name);
        cout << " Kode: ";
        cin >> emp[i].emp_no;
        cout << " Gaji: ";
        cin >> emp[i].salary;
    }

    cout << "\nData Pegawai\n";
    cout << "No.\tNama\tKode\tGaji\n";

    for (int i = 0; i < EMPLOYEE_COUNT; i++) {
        cout << i + 1 << "\t" 
             << emp[i].name << "\t" 
             << emp[i].emp_no << "\t" 
             << emp[i].salary << endl;
    }

    return 0;
}
