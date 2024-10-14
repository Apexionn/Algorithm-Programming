#include <stdio.h>

int main() {
    double X, Y;

    // Meminta pengguna memasukkan jumlah uang dan tingkat bunga
    printf("");
    scanf("%lf %lf", &X, &Y);

    // Menghitung jumlah uang setelah 3 bulan dengan bunga majemuk
    for (int i = 0; i < 3; i++) {
        X += X * (Y / 100.0);
    }

    // Menampilkan hasil dengan 2 desimal
    printf("%.2f\n", X);

    return 0;
}
