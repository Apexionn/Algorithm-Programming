#include <stdio.h>

int main() {
    int T, N;
    
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%d", &N);
        
        int table[N][N];
        int sumColumns[N];
        
        for (int i = 0; i < N; i++) {
            sumColumns[i] = 0;
        }
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &table[i][j]);
                sumColumns[j] += table[i][j];
            }
        }
        
        printf("Case #%d:", t);
        for (int i = 0; i < N; i++) {
            printf(" %d", sumColumns[i]);
        }
        printf("\n");
    }
    
    return 0;
}
