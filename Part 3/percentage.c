#include <stdio.h>

int main() {
    int T, P, N;
    double hasil;

    // Membaca jumlah kasus uji
    scanf("%d", &T);

    // Mengulang perhitungan untuk setiap kasus uji
    for (int i = 0; i < T; i++) {
        // Membaca persentase dan nilai
        scanf("%d %d", &P, &N);

        // Menghitung hasil persentase
        hasil = (P / 100.0) * N;

        // Menampilkan hasil
        printf("%.2lf\n", hasil);
    }

    return 0;
}