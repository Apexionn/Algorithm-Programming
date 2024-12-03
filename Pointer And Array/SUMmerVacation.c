#include <stdio.h>

int findCoolFactor(int arr[], int n) {
    int coolFactor = 0;
    
    // For each number in the array, check if it can be formed by summing two others
    for (int i = 0; i < n; i++) {
        int found = 0;
        // Try all possible pairs
        for (int j = 0; j < n && !found; j++) {
            for (int k = j + 1; k < n && !found; k++) {
                // Skip if we're using the current number
                if (i == j || i == k) continue;
                
                // If we find a pair that sums to our target
                if (arr[j] + arr[k] == arr[i]) {
                    coolFactor++;
                    found = 1;
                }
            }
        }
    }
    
    return coolFactor;
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        
        int A[200];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        int result = findCoolFactor(A, N);
        printf("Case #%d: %d\n", t, result);
    }
    
    return 0;
}