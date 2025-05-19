#include <iostream>
using namespace std;

struct Employee {
    string Name;
    int Age;
};

int main() {
    int size = 3;
    Employee* DynArray;
    DynArray = new (nothrow) Employee[size];

    DynArray[0].Name = "Agus";
    DynArray[0].Age = 33;
    DynArray[1].Name = "Sigit";
    DynArray[1].Age = 26;
    DynArray[2].Name = "Sulis";
    DynArray[2].Age = 52;

    // Menambah satu elemen baru
    size++;  // Menambah ukuran array
    Employee* tempArray = new (nothrow) Employee[size];  // Alokasi array baru dengan ukuran lebih besar

    // Menyalin data dari DynArray ke tempArray
    for (int i = 0; i < size - 1; i++) {
        tempArray[i] = DynArray[i];
    }

    // Menambah data baru pada elemen terakhir
    tempArray[size - 1].Name = "Budi";
    tempArray[size - 1].Age = 40;

    delete[] DynArray;  // Menghapus array lama
    DynArray = tempArray;  // Mengarahkan pointer DynArray ke tempArray yang baru

    // Menampilkan data setelah penambahan
    cout << "Displaying the Array Content" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Name: " << DynArray[i].Name << "\tAge: " << DynArray[i].Age << endl;
    }

    delete[] DynArray;  // Menghapus array yang sudah tidak digunakan
    return 0;
}
