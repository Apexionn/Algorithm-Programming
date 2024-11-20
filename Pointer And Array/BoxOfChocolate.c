#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M; 
        scanf("%d %d", &N, &M);

        long long maxTotal = 0; 

        for (int i = 0; i < N; i++) {
            long long maxWeight = 0; 
            for (int j = 0; j < M; j++) {
                long long weight;
                scanf("%lld", &weight);
                if (weight > maxWeight) {
                    maxWeight = weight; 
                }
            }
            maxTotal += maxWeight; 
        }

        printf("Case #%d: %lld\n", t, maxTotal);
    }

    return 0;
}
