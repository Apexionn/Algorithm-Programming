#include <stdio.h>

int main() {
    int A;

    scanf("%d", &A);

    int B = A + A;
    int C = B - 1;

    printf("%d plus %d is %d\n", A, A, B);
    printf("minus one is %d\n", C);

    return 0;
}
