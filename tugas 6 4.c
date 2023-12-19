#include <stdio.h>

int main() {
    // Deklarasi variabel untuk menyimpan suhu
    float suhu;

    // Meminta pengguna memasukkan suhu dalam derajat Celsius
    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &suhu);

    // Menentukan apakah suhu sangat panas atau normal menggunakan if-else
    if (suhu > 30) {
        printf("suhu sangat panas\n");
    } else {
        printf("suhu normal\n");
    }

    return 0;
}
