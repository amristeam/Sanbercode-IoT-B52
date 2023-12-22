#include <stdio.h>
#include <string.h>

// Definisi struktur Student
struct Student {
    char name[50];
    double score;
};

// Deklarasi fungsi printStudent
void printStudent(struct Student s) {
    printf("Nama: %s\n", s.name);
    printf("Nilai: %.2f\n", s.score);
}

int main() {
    // Inisialisasi variabel struct Student
    struct Student student1;

    // Menginisialisasi nilai pada variabel struct
    strcpy(student1.name, "Amri Rama");
    student1.score = 80.0;

    // Memanggil fungsi printStudent untuk mencetak informasi mahasiswa
    printStudent(student1);

    return 0;
}
