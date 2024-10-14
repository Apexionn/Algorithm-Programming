#include <stdio.h>

int main(){
    int a, b, add, subs, multi, div, mod;
    scanf("%d %d", &a, &b);
    add = a + b;
    subs = a - b;
    multi = a * b;
    div = a / b;
    mod = a % b;
    printf("%d\n", add);
    printf("%d\n", subs);
    printf("%d\n", multi);
    printf("%d\n", div);
    printf("%d\n", mod);
    return 0;
}