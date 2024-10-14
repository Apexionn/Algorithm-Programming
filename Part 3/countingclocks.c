#include <stdio.h>

int main() {
    long long T, A, B;
    double rotasi;

    scanf("%lld", &T);

    // Array untuk menyimpan hasil perhitungan
    double hasil[T];

    // Membaca input dan menghitung rotasi
    for (long long i = 0; i < T; i++) {
        scanf("%lld %lld", &A, &B);
        hasil[i] = (double)A * B / 360;
    }

    // Mencetak hasil
    for (long long i = 0; i < T; i++) {
        printf("%.2lf\n", hasil[i]);
    }

    return 0;
}
