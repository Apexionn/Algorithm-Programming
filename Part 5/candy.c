#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int T;  
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N, M; 
        scanf("%d %d", &N, &M);
        
        int prices[N];
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &prices[i]);
        }
        
        qsort(prices, N, sizeof(int), compare);
        
        int count = 0; 
        for (int i = 0; i < N; i++) {
            if (M >= prices[i]) {
                int candies = M / prices[i]; 
                count += candies; 
                M -= candies * prices[i];  
            }
            if (M == 0) {
                break; 
            }
        }
        
        printf("Case #%d: %d\n", t, count);
    }
    
    return 0;
}
