#include <stdio.h>

int main() {
    unsigned long long a, b, c, d;
    
    scanf("%llu %llu %llu %llu", &a, &b, &c, &d);
    
    unsigned long long LHS = a * b;
    unsigned long long RHS = c - d;
    
    if (LHS == RHS) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
