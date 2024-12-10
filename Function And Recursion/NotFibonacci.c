#include <stdio.h>

int main() {
    int F0, F1, K;
    
    scanf("%d %d", &F0, &F1);
    
    scanf("%d", &K);
    
    if (K == 1) {
        printf("%d\n", F0);
        return 0;
    }
    if (K == 2) {
        printf("%d\n", F1);
        return 0;
    }
    
    int prev1 = F0;
    int prev2 = F1;
    int current;
    
    for (int i = 3; i <= K; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    
    printf("%d\n", current);
    
    return 0;
}