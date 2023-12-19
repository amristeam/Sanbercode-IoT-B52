#include <stdio.h>

int main() {
    // Deklarasi variabel untuk menyimpan 3 angka
    int a, b, c;

    // Meminta pengguna memasukkan 3 angka
    printf("masukkan tiga angka: ");
    scanf("%d %d %d", &a, &b, &c);

    // Menentukan angka terkecil menggunakan nested if
    if (a < b)
        if (a < c)
            printf("angka yang terkecil adalah %d\n", a);
        else
            printf("angka yang terkecil adalah %d\n", c);
    else
        if (b < c)
            printf("angka yang terkecil adalah %d\n", b);
        else
            printf("angka yang terkecil adalah %d\n", c);

    return 0;
}
