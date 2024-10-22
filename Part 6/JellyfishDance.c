#include <stdio.h>

int main() {
    int N, Q;
    int views[100005];
    int prefix[100005];
    
    scanf("%d", &N);
    
    for (int i = 1; i <= N; ++i) {
        scanf("%d", &views[i]);
    }
    
    prefix[0] = 0;
    for (int i = 1; i <= N; ++i) {
        prefix[i] = prefix[i-1] + views[i];
    }
    
    scanf("%d", &Q);
    
    for (int q = 1; q <= Q; ++q) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        int total_views;
        if (A == 1) {
            total_views = prefix[B];
        } else {
            total_views = prefix[B] - prefix[A-1];
        }
        
        printf("Case #%d: %d\n", q, total_views);
    }
    
    return 0;
}
