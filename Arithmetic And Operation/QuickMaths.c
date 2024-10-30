#include <stdio.h>

int main(){
    int A;
    scanf("%d", &A);

    int plus = A + A;
    printf("%d plus %d is %d\n", A, A, plus);
    printf("minus one is %d\n", plus - 1);
    
    return 0;
}