#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>
using namespace std;

struct MataKuliah {
    string nama;
    float sks;
    float nilai;
};

float calculate_gpa(const vector<MataKuliah>& matkul_list);
void print_data(const string& NIM, const vector<MataKuliah>& matkul_list, float GPA);
void input_data();
float input_float(const string& prompt, float min, float max);
int input_int(const string& prompt, int min);

int main() {
    input_data();
    return 0;
}

void input_data() {
    for (int student = 0; student < 5; student++) {
        string NIM;
        int jumlah_matkul;

        cout << "Selamat Datang di Program Penghitung IPK Mahasiswa!" << endl << endl;
        cout << "Masukkan NIM Anda: ";
        cin >> NIM;
        cin.ignore();

        jumlah_matkul = input_int("\nMasukkan Jumlah Mata Kuliah Semester ini: ", 1);

        vector<MataKuliah> matkul_list;

        for (int i = 0; i < jumlah_matkul; i++) {
            MataKuliah mk;
            cout << "\nMasukkan Nama Mata Kuliah ke-" << (i + 1) << ": ";
            getline(cin, mk.nama);

            while (mk.nama.empty()) {
                cout << "Nama tidak boleh kosong. Masukkan kembali: ";
                getline(cin, mk.nama);
            }

            if (mk.nama.length() > 49) mk.nama = mk.nama.substr(0, 49);

            mk.sks = input_float("Masukkan SKS Mata Kuliah ke-" + to_string(i + 1) + ": ", 0.5, 99);

            mk.nilai = input_float("[Dalam Skala 1 s/d 4] Masukkan Nilai Mata Kuliah ke-" + to_string(i + 1) + ": ", 1.0, 4.0);

            matkul_list.push_back(mk);
        }

        float GPA = calculate_gpa(matkul_list);
        print_data(NIM, matkul_list, GPA);
    }
}

float calculate_gpa(const vector<MataKuliah>& matkul_list) {
    float total_sks = 0.0f, total_bobot = 0.0f;

    for (const auto& mk : matkul_list) {
        total_sks += mk.sks;
        total_bobot += mk.nilai * mk.sks;
    }

    return (total_sks != 0) ? total_bobot / total_sks : 0.0f;
}

void print_data(const string& NIM, const vector<MataKuliah>& matkul_list, float GPA) {
    cout << "\n------------------------" << endl;
    cout << "NILAI AKHIR MAHASISWA" << endl;
    cout << "NIM: " << NIM << endl;
    cout << "Jumlah Mata Kuliah: " << matkul_list.size() << endl;
    cout << "------------------------" << endl;

    for (const auto& mk : matkul_list) {
        cout << "Nama Mata Kuliah: " << mk.nama << endl;
        cout << "Jumlah SKS: " << mk.sks << endl;
        cout << "Nilai: " << mk.nilai << endl;
    }

    cout << fixed << setprecision(2);
    cout << "IPK: " << GPA << endl;
    cout << "------------------------\n" << endl;
}

float input_float(const string& prompt, float min, float max) {
    float value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail() || value < min || value > max) {
            cout << "Input tidak valid. Harus antara " << min << " dan " << max << "." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore();
            return value;
        }
    }
}

int input_int(const string& prompt, int min) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail() || value < min) {
            cout << "Input tidak valid. Harus minimal " << min << "." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore();
            return value;
        }
    }
}
