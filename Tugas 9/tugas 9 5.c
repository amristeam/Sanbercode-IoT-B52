#include <stdio.h>
#include <string.h>

int main() {
    // Deklarasi dan inisialisasi string1 dan string2
    char string1[50] = "Saya sedang belajar Bahasa C ";
    char string2[50] = "bersama teman2 sanbercode";

    // Menggunakan strcat untuk menggabungkan string1 dan string2
    strcat(string1, string2);


    // Menampilkan hasil
    printf("%s\n", string1);

    return 0;
}
