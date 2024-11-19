#include <stdio.h>

// Nomor 1
// Struct address
struct address {
    char street[40];
    int number;
    char city[20];
    char province[20];
};

// Struct DoB
struct DoB {
    int date, month, year;
};

// Struct student
struct student {
    char studentNum[10];
    char name[30];
    struct address addr;
    struct DoB DateofBirth;
};

// Nomor 2
int main() {
    struct student dataStudent[100];
    int size;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("\nData Mahasiswa ke-%d:\n", i + 1);
        printf("NIM: ");
        scanf("%s", dataStudent[i].studentNum);
        printf("Nama: ");
        scanf(" %[^\n]", dataStudent[i].name); 
        printf("Alamat (Jalan): ");
        scanf(" %[^\n]", dataStudent[i].addr.street);
        printf("Nomor Rumah: ");
        scanf("%d", &dataStudent[i].addr.number);
        printf("Kota: ");
        scanf(" %[^\n]", dataStudent[i].addr.city);
        printf("Provinsi: ");
        scanf(" %[^\n]", dataStudent[i].addr.province);
        printf("Tanggal Lahir (dd mm yyyy): ");
        scanf("%d %d %d", &dataStudent[i].DateofBirth.date, &dataStudent[i].DateofBirth.month, &dataStudent[i].DateofBirth.year);
    }

    printf("\nData Mahasiswa yang telah dimasukkan:\n");
    for (int i = 0; i < size; i++) {
        printf("\nMahasiswa Baru ke-%d:\n", i + 1);
        printf("NIM: %s\n", dataStudent[i].studentNum);
        printf("Nama: %s\n", dataStudent[i].name);
        printf("Alamat: %s, No. %d, Kota %s, Provinsi %s\n",dataStudent[i].addr.street, dataStudent[i].addr.number,dataStudent[i].addr.city, dataStudent[i].addr.province);
        printf("Tanggal Lahir: %02d-%02d-%04d\n",dataStudent[i].DateofBirth.date, dataStudent[i].DateofBirth.month,dataStudent[i].DateofBirth.year);
    }

    return 0;
}
