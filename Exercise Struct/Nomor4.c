#include <stdio.h>

struct ipkhms {
    char nim[11];
    char name[30];
    float gpa;
};

int main() {
    struct ipkhms IPK[100];
    int loop;

    printf("Masukkan Jumlah Data Mahasiswa: ");
    scanf("%d", &loop);

    for (int i = 0; i < loop; i++) {
        printf("\nData Mahasiswa ke-%d:\n", i + 1);
        printf("NIM: ");
        scanf(" %[^\n]", IPK[i].nim);
        printf("Nama Mahasiswa: ");
        scanf(" %[^\n]", IPK[i].name);
        printf("GPA: ");
        scanf("%f", &IPK[i].gpa);
    }

    printf("\nMahasiswa GPA >= 3.0:\n");
    for (int i = 0; i < loop; i++) {
        if (IPK[i].gpa >= 3.0) {
            printf("%s\n", IPK[i].name);
        }
    }

    printf("\nMahasiswa GPA < 3.0:\n");
    for (int i = 0; i < loop; i++) {
        if (IPK[i].gpa < 3.0) {
            printf("%s\n", IPK[i].name);
        }
    }

    return 0;
}
