#include <stdio.h>

void multiplyMatrix(int N, int A[N][N], int B[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int T;

    scanf("%d", &T);

    for (int testCase = 1; testCase <= T; testCase++) {
        int N;
        
        scanf("%d", &N);

        int matrix1[N][N], matrix2[N][N], matrix3[N][N];
        int tempResult[N][N], finalResult[N][N];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &matrix1[i][j]);
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &matrix2[i][j]);
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &matrix3[i][j]);
            }
        }

        multiplyMatrix(N, matrix1, matrix2, tempResult);

        multiplyMatrix(N, tempResult, matrix3, finalResult);

        printf("Case #%d:\n", testCase);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d", finalResult[i][j]);
                if (j < N - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
