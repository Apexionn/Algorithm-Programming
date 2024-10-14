#include <stdio.h>

#define MAXN 100005

int main() {
    int N, Q;
    int views[MAXN];
    int prefix[MAXN];
    
    scanf("%d", &N);
    
    // Read views gained each day
    for (int i = 1; i <= N; ++i) {
        scanf("%d", &views[i]);
    }
    
    // Compute prefix sums
    prefix[0] = 0; // prefix[0] is 0 to handle prefix[1] properly
    for (int i = 1; i <= N; ++i) {
        prefix[i] = prefix[i-1] + views[i];
    }
    
    // Read number of queries Q
    scanf("%d", &Q);
    
    // Process each query
    for (int q = 1; q <= Q; ++q) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        // Calculate the sum from day A to day B
        int total_views;
        if (A == 1) {
            total_views = prefix[B];
        } else {
            total_views = prefix[B] - prefix[A-1];
        }
        
        // Output the result in the required format
        printf("Case #%d: %d\n", q, total_views);
    }
    
    return 0;
}
