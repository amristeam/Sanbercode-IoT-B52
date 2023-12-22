#include <stdio.h>

// Definisi struktur tanggal
struct tanggal {
    int hari;
    int bulan;
    int tahun;
};

// Deklarasi fungsi printtanggal
void printtanggal(struct tanggal d) {
    printf("%d/%d/%d\n", d.hari, d.bulan, d.tahun);
}

int main() {
    // Inisialisasi variabel struct tanggal
    struct tanggal now = {23, 12, 2023};

    // Memanggil fungsi printtanggal untuk mencetak tanggal
    printtanggal(now);

    return 0;
}
