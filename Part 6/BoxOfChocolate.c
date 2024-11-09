#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M; 
        scanf("%d %d", &N, &M);

        int maxWeight = 0;  

        for (int i = 0; i < N; i++) {
            int maxChoco = 0; 

            for (int j = 0; j < M; j++) {
                int weight;
                scanf("%d", &weight);

                if (weight > maxChoco) {
                    maxChoco = weight;
                }
            }
            maxWeight += maxChoco;
        }

        printf("Case #%d: %d\n", t, maxWeight);
    }

    return 0;
}
