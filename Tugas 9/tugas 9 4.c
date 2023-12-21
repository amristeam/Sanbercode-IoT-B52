#include <stdio.h>
#include <string.h>

int main() {
    // Deklarasi dan inisialisasi string1
    char string1[50] = "Nama saya adalah Amri";

    // Deklarasi string2
    char string2[50];

    // Menggunakan strcpy untuk menyalin nilai dari string1 ke string2
    strcpy(string2, string1);

    // Menampilkan hasil
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    return 0;
}
