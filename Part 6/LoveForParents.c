#include <stdio.h>

int main() {
    int N;
    
    // Read the number of items
    scanf("%d", &N);
    
    int prices[N];
    
    // Read the initial prices of the items
    for (int i = 0; i < N; ++i) {
        scanf("%d", &prices[i]);
    }
    
    int Q;
    
    // Read  the number of updates
    scanf("%d", &Q);
    
    // Process each update
    for (int t = 1; t <= Q; ++t) {
        int A, B;
        
        // Read the item index (Ai) and the new price (Bi)
        scanf("%d %d", &A, &B);
        
        // Update the price of the Ai-th item (1-based index, so subtract 1)
        prices[A - 1] = B;
        
        // Output the updated prices for this case
        printf("Case #%d:", t);
        for (int i = 0; i < N; ++i) {
            if (i == N - 1) {
                // Last item, avoid trailing space
                printf(" %d", prices[i]);
            } else {
                // Print with a space
                printf(" %d", prices[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
