#include <stdio.h>
#include <string.h>

struct studentScore {
    char nim[11];
    char name[30];
    char subjectCode[5];
    int sks;
    char grade;
};

int gradeToPoint(char grade) {
    switch (grade) {
        case 'A': return 4;
        case 'B': return 3;
        case 'C': return 2;
        case 'D': return 1;
        case 'E': return 0;
        default: return 0; 
    }
}

int main() {
    struct studentScore studentData[5]; 
    char nim[11], name[30];
    int totalSKS = 0;
    int totalPoints = 0;
    float gpa;

    printf("Masukkan NIM: ");
    scanf(" %[^\n]", nim);
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < 5; i++) {
        printf("\nMata Kuliah ke-%d:\n", i + 1);
        printf("Masukkan Kode Mata Kuliah: ");
        scanf(" %[^\n]", studentData[i].subjectCode);
        printf("Masukkan SKS: ");
        scanf("%d", &studentData[i].sks);
        printf("Masukkan Nilai (Grade): ");
        scanf(" %c", &studentData[i].grade);

        totalSKS += studentData[i].sks;
        totalPoints += studentData[i].sks * gradeToPoint(studentData[i].grade);
    }

    gpa = (float)totalPoints / totalSKS;

    printf("\nData Mahasiswa:\n");
    printf("NIM: %s\n", nim);
    printf("Nama: %s\n", name);
    printf("GPA Akhir: %.2f\n", gpa);

    return 0;
}
