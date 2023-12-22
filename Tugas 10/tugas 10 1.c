#include <stdio.h>
#include <string.h>

// Deklarasi struktur Car
struct Car {
    char brand[50];
    char model[50];
    int year;
};

int main() {
    // Inisialisasi variabel struct Car
    struct Car gabung;

    // Mengisi nilai pada variabel struct Car
    strcpy(gabung.brand, "BMW");
    strcpy(gabung.model, "X5");
    gabung.year = 1999;

    // Menampilkan nilai dari variabel struct Car
    printf("Brand: %s\n", gabung.brand);
    printf("Model: %s\n", gabung.model);
    printf("Tahun: %d\n", gabung.year);

    return 0;
}
