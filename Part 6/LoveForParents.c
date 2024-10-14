#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    int prices[N];
    
    for (int i = 0; i < N; ++i) {
        scanf("%d", &prices[i]);
    }
    
    int Q;
    
    scanf("%d", &Q);
    
    for (int t = 1; t <= Q; ++t) {
        int A, B;
        
        scanf("%d %d", &A, &B);
        
        prices[A - 1] = B;
        
        printf("Case #%d:", t);
        for (int i = 0; i < N; ++i) {
            if (i == N - 1) {
                printf(" %d", prices[i]);
            } else {
                printf(" %d", prices[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
