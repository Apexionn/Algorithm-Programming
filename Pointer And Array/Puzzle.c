#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    int matrix[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (matrix[i][j] == matrix[i][k]) {
                    printf("Nay\n");  
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (matrix[j][i] == matrix[k][i]) {
                    printf("Nay\n"); 
                    return 0;
                }
            }
        }
    }
    
    printf("Yay\n");
    return 0;
}
