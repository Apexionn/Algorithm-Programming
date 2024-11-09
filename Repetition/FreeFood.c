#include <stdio.h>

int main() {
    int T;      
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N, M; 
        scanf("%d %d", &N, &M);
        
        int cost, totalCost = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &cost);
            totalCost += cost;
        }
        
        printf("Case #%d: ", t);
        if (totalCost > M) {
            printf("Wash dishes\n");
        } else {
            printf("No worries\n");
        }
    }
    
    return 0;
}
