#include <stdio.h>

int main() {
    // Deklarasi dan inisialisasi array dua dimensi
    int bil[2][5] = {{1, 2, 3, 4, 5}, {10, 9, 8, 7, 6}};

    // Menampilkan elemen array dengan indeks baris ke-0 dan kolom ke-4
    printf("%d\n", bil[0][4]);

    // Menampilkan elemen array dengan indeks baris ke-1 dan kolom ke-0
    printf("%d\n", bil[1][0]);

    return 0;
}
