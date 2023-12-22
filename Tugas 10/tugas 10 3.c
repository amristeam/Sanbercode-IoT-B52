#include <stdio.h>
#include <string.h>

// Deklarasi struktur Student
struct Student {
    char name[50];
    int age;
};

int main() {
    // Inisialisasi variabel struktur Student
    struct Student student1;

    // Menginisialisasi nilai pada variabel struktur
    strcpy(student1.name, "Amri Rama");
    student1.age = 25;

    // Menampilkan informasi mahasiswa
    printf("Nama: %s\n", student1.name);
    printf("Usia: %d\n", student1.age);

    return 0;
}
