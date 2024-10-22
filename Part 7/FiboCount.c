#include <stdio.h>

int countCalls = 0;

int Fibo(int n) {
    countCalls++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return Fibo(n - 1) + Fibo(n - 2);
}

int main() {
    int T, n;
    
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++) {
        scanf("%d", &n);
        
        countCalls = 0;
        Fibo(n);
        
        printf("Case #%d: %d\n", i, countCalls);
    }
    
    return 0;
}
