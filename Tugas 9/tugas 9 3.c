#include <stdio.h>

// Deklarasi fungsi untuk mengalikan elemen array
int kalikanElemen(int arr[], int size) {
    int hasil = 1;

    for (int i = 0; i < size; i++) {
        hasil *= arr[i];
    }

    return hasil;
}

int main() {
    // Deklarasi array dan inisialisasi nilai
    int nilai[3] = {2, 5, 1};

    // Memanggil fungsi untuk mengalikan elemen array
    int hasilKali = kalikanElemen(nilai, 3);

    // Menampilkan hasil perkalian
    printf("%d\n", hasilKali);

    return 0;
}
