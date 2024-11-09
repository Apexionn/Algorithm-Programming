#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        
        int cashback = (A * B) / 100;
        
        if (cashback > C) {
            cashback = C;
        }
        
        printf("Case #%d: %d\n", i, cashback);
    }

    return 0;
}
