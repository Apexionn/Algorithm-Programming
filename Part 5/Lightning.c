#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int A, B, C, D, E, F;
        scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);

        printf("Case #%d: ", t);

        for (int i = 0; i < A; i++) {
            printf("a");
        }
        for (int i = 0; i < B; i++) {
            printf("s");
        }
        for (int i = 0; i < C; i++) {
            printf("h");
        }
        for (int i = 0; i < D; i++) {
            printf("i");
        }
        for (int i = 0; i < E; i++) {
            printf("a");
        }
        for (int i = 0; i < F; i++) {
            printf("p");
        }

        printf("\n");
    }

    return 0;
}
