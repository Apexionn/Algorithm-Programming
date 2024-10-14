#include <stdio.h>

int main() {
    int N, K;
    
    // Input N and K
    scanf("%d %d", &N, &K);

    // First Square: Completely filled with '#'
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("#");
        }
        printf("\n");
    }
    printf("\n"); // Newline after the first square

    // Second Square: Every K-th row filled with '#', others with '.'
    for (int i = 0; i < N; i++) {
        if ((i + 1) % K == 0) {  // If it's the K-th row
            for (int j = 0; j < N; j++) {
                printf("#");
            }
        } else {  // Other rows are filled with '.'
            for (int j = 0; j < N; j++) {
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n"); // Newline after the second square

    // Third Square: Every K-th column filled with '#', others with '.'
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((j + 1) % K == 0) {  // If it's the K-th column
                printf("#");
            } else {  // Other columns are filled with '.'
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
