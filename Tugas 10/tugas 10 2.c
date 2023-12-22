#include <stdio.h>
#include <string.h>

// Deklarasi struktur pelatihan
struct pelatihan {
    char nama[11];
    char batch[11];
    int angka;
};

int main() {
    // Inisialisasi variabel struktur pelatihan
    struct pelatihan iot = {"Sanbercode", "Batch 52", 0};

    // Menampilkan output
    printf("%s %s\n", iot.nama, iot.batch);

    return 0;
}
