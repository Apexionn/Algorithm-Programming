#include <stdio.h>

int main() {
    int Q, N = 1;  
    scanf("%d", &Q); 

    for (int i = 0; i < Q; i++) {
        N = N * 2 + 1;  
    }

    // Cetak hasil akhir
    printf("%d\n", N);

    return 0;
}
