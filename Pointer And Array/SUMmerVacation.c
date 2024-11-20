#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N);

        int A[200];
        int sumExists[401] = {0}; 
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int sum = A[i] + A[j];
                sumExists[sum] = 1; 
            }
        }

        int coolFactor = 0;
        for (int i = 0; i < N; i++) {
            if (sumExists[A[i]]) {
                coolFactor++;
                sumExists[A[i]] = 0; 
            }
        }

        printf("Case #%d: %d\n", t, coolFactor);
    }

    return 0;
}
