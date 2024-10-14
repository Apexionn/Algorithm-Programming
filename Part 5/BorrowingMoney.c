#include <stdio.h>

int main() {
    int N, amount, total = 0;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &amount); 
        total += amount; 
    }
    
    printf("%d\n", total);
    
    return 0;
}
