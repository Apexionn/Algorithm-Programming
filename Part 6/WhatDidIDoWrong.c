#include <stdio.h>

int main() {
    int T;
    
    scanf("%d", &T);
    
    for (int t = 1; t <= T; ++t) {
        int N;
        
        scanf("%d", &N);
        
        int Ai[N], Bi[N], result[N];
        
        for (int i = 0; i < N; ++i) {
            scanf("%d", &Ai[i]);
        }
        
        for (int i = 0; i < N; ++i) {
            scanf("%d", &Bi[i]);
        }
        
        for (int i = 0; i < N; ++i) {
            result[i] = Ai[i] - Bi[i];  
        }
        
        printf("Case #%d:", t);
        for (int i = 0; i < N; ++i) {
            printf(" %d", result[i]);
        }
        printf("\n");
    }
    
    return 0;
}
