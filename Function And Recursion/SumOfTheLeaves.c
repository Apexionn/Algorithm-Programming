#include <stdio.h>

void calculateLeaves(int index, int n, int *array, int sum) {
    int left = 2 * index;      // Cabang kiri
    int right = 2 * index + 1; // Cabang kanan

    // Tambahkan nilai pada indeks sekarang ke dalam jumlah
    sum += array[index - 1];

    // Jika indeks berada di luar array (tidak memiliki cabang lebih lanjut)
    if (left > n && right > n) {
        printf("%d\n", sum); 
        return;
    }

    // Cek cabang kiri
    if (left <= n) {
        calculateLeaves(left, n, array, sum);
    }

    // Cek cabang kanan
    if (right <= n) {
        calculateLeaves(right, n, array, sum);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); 

        int array[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &array[i]); // Membaca nilai setiap node
        }

        printf("Case #%d:\n", t);
        calculateLeaves(1, N, array, 0); // Mulai dari node pertama (root)
    }

    return 0;
}
