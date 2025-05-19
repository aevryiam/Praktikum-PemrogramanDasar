#include <stdio.h>
#define MAKS 100
 
// Fungsi untuk input array
void inputArray(int arr[], int *n) {
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", n);
 
    for (int i = 0; i < *n; i++) {
        printf("Elemen ke-%d: ", i);
        scanf("%d", &arr[i]);
    }
}
 
// Fungsi untuk mencari 3 angka terbesar dan indeksnya
void cariTigaTerbesar(int arr[], int n, int tigaTerbesar[], int indeks[]) {
    // Inisialisasi nilai awal
    for (int i = 0; i < 3; i++) {
        tigaTerbesar[i] = -2147483648;  // Nilai minimum dari int
        indeks[i] = -1;
    }
 
    for (int i = 0; i < n; i++) {
        if (arr[i] > tigaTerbesar[0]) {
            // Geser ke kanan
            tigaTerbesar[2] = tigaTerbesar[1];
            indeks[2] = indeks[1];
 
            tigaTerbesar[1] = tigaTerbesar[0];
            indeks[1] = indeks[0];
 
            tigaTerbesar[0] = arr[i];
            indeks[0] = i;
        } else if (arr[i] > tigaTerbesar[1]) {
            tigaTerbesar[2] = tigaTerbesar[1];
            indeks[2] = indeks[1];
 
            tigaTerbesar[1] = arr[i];
            indeks[1] = i;
        } else if (arr[i] > tigaTerbesar[2]) {
            tigaTerbesar[2] = arr[i];
            indeks[2] = i;
        }
    }
}
 
// Fungsi untuk menampilkan hasil
void tampilkanTigaTerbesar(int tigaTerbesar[], int indeks[]) {
    printf("\nTiga angka terbesar beserta indeksnya:\n");
    for (int i = 0; i < 3; i++) {
        if (indeks[i] != -1)
            printf("Ke-%d terbesar: %d (indeks %d)\n", i+1, tigaTerbesar[i], indeks[i]);
    }
}
 
// Fungsi utama
int main() {
    int arr[MAKS], n;
    int tigaTerbesar[3], indeks[3];
 
    inputArray(arr, &n);
    if (n < 3) {
        printf("Jumlah elemen harus minimal 3.\n");
        return 1;
    }
 
    cariTigaTerbesar(arr, n, tigaTerbesar, indeks);
    tampilkanTigaTerbesar(tigaTerbesar, indeks);
 
    return 0;
}