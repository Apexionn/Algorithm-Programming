#include <stdio.h>

int main() {
    int X, Y;

    // Meminta input dalam satu baris, langsung dipisahkan spasi
    scanf("%d %d", &X, &Y);

    // Memeriksa apakah input valid sesuai dengan constraints
    if (X < 1 || X > Y || Y > 1000000) {
        return 1; // Keluar dari program jika input tidak valid
    }

    // Menghitung persentase
    double persentase = (double)X / Y * 100;

    // Menampilkan hasil tanpa teks tambahan, langsung nilai persentase
    printf("%.2lf%\n", persentase);

    return 0;
}