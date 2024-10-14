#include <stdio.h>

int main() {
    int A, B;

    // Read two integers from input
    scanf("%d %d", &A, &B);

    // Calculate the modulus
    int result = A % B;

    // Print the result
    printf("%d\n", result);

    return 0;
}
