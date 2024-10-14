#include <stdio.h>

int main() {
    // Variabel untuk menyimpan damage
    float P, M, D;

    // Mengambil input untuk physical, magical, dan pure damage
    scanf("%f %f %f", &P, &M, &D);

    // Menghitung total damage yang diterima
    float totalDamage = (P * 0.2) + (M * 0.3) + (D * 0.5);

    // Menampilkan hasil total damage dengan dua desimal
    printf("%.2f\n", totalDamage);

    return 0;
}
