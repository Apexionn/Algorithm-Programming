#include <stdio.h>

int main() {
    int A, B;
    double discount;

    scanf("%d %d", &A, &B);

    discount = ((double)(A - B) / A) * 100;

    printf("%.2lf%%\n", discount);

    return 0;
}
