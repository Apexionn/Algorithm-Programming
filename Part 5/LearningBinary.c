#include <stdio.h>

int main() {
    int T; // Variabel untuk menyimpan jumlah test case
    int X, P;

    // Meminta input jumlah test case
    scanf("%d", &T);

    // Loop untuk T input
    for (int i = 0; i < T; i++) {
        // Baca input angka X dan posisi P
        scanf("%d %d", &X, &P);
        
        // Cek nilai bit pada posisi P
        int bit_value = (X >> P) & 1;
        
        // Tampilkan nilai bit
        printf("%d\n", bit_value);
    }

    return 0;
}
