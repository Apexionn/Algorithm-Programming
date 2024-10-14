#include <stdio.h>

int main() {
    int T;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    // Process each test case
    for (int t = 1; t <= T; ++t) {
        int N;
        
        // Read the number of ingredients
        scanf("%d", &N);
        
        int Ai[N], Bi[N], result[N];
        
        // Read Ai, the required amount of each ingredient
        for (int i = 0; i < N; ++i) {
            scanf("%d", &Ai[i]);
        }
        
        // Read Bi, the available amount of each ingredient
        for (int i = 0; i < N; ++i) {
            scanf("%d", &Bi[i]);
        }
        
        // Calculate how much Jojo needs to buy or will have left
        for (int i = 0; i < N; ++i) {
            result[i] = Ai[i] - Bi[i];  // Positive means need to buy, negative means excess
        }
        
        // Output the result for this test case
        printf("Case #%d:", t);
        for (int i = 0; i < N; ++i) {
            printf(" %d", result[i]);
        }
        printf("\n");
    }
    
    return 0;
}
