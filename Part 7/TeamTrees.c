#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        
        int total = 0; 
        
        for (int i = 0; i < N; i++) {
            int Ai;
            scanf("%d", &Ai);
            total += Ai; 
        }
        
        printf("Case #%d: %d\n", t, total);
    }
    
    return 0;
}
