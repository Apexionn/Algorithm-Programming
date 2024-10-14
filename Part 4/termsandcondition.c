#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++) {
        int A, B, C;
        // Read A (price), B (percentage), and C (maximum cashback)
        scanf("%d %d %d", &A, &B, &C);
        
        // Calculate cashback: A * B / 100
        int cashback = (A * B) / 100;
        
        // Check if cashback exceeds the maximum limit
        if (cashback > C) {
            cashback = C;
        }
        
        // Output the result for the current test case
        printf("Case #%d: %d\n", i, cashback);
    }

    return 0;
}
