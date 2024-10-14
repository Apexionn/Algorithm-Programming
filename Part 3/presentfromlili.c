#include <stdio.h>

int main() {
    double L, B, H;
    double luas_segitiga, luas_permukaan;

    // Membaca input L, B, H
    scanf("%lf %lf %lf", &L, &B, &H);

    // Menghitung luas segitiga
    luas_segitiga = 0.5 * B * H;

    // Menghitung luas permukaan
    luas_permukaan = 2 * luas_segitiga + 3 * L * B;

    // Output hasil dengan 3 digit di belakang koma
    printf("%.3lf\n", luas_permukaan);

    return 0;
}
