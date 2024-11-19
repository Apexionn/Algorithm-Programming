#include <stdio.h>

struct studentScore
{
    char nim[11];
    char name[30];
    char subjectCode[5];
    int sks;
    char grade;
};

int main(){
    struct studentScore studentData;

    printf("Masukkan NIM: ");
    scanf(" %[^\n]", studentData.nim);
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", studentData.name);
    printf("Masukkan Kode Mata Kuliah: ");
    scanf(" %[^\n]", studentData.subjectCode);
    printf("Masukkan SKS: ");
    scanf(" %d", &studentData.sks);
    printf("Masukkan Nilai: ");
    scanf(" %[^\n]", &studentData.grade);

    printf("\nData Mahasiswa:\n");
    printf("NIM           : %s\n", studentData.nim);
    printf("Nama          : %s\n", studentData.name);
    printf("Kode Matkul   : %s\n", studentData.subjectCode);
    printf("SKS           : %d\n", studentData.sks);
    printf("Nilai (Grade) : %c\n", studentData.grade);

}