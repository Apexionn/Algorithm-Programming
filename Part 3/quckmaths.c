#include <stdio.h>

int main() {
    int A;

    // Membaca input
    scanf("%d", &A);

    // Melakukan perhitungan
    int B = A + A;
    int C = B - 1;

    // Menampilkan hasil
    printf("%d plus %d is %d\n", A, A, B);
    printf("minus one is %d\n", C);

    return 0;
}
