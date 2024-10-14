#include <stdio.h>

int main() {
    int A1, B1, C1, D1;
    int A2, B2, C2, D2;
    int A3, B3, C3, D3;

    scanf("(%d+%d)x(%d-%d)\n", &A1, &B1, &C1, &D1);

    scanf("(%d+%d)x(%d-%d)\n", &A2, &B2, &C2, &D2);

    scanf("(%d+%d)x(%d-%d)", &A3, &B3, &C3, &D3);

    int result1 = (A1 + B1) * (C1 - D1);
    int result2 = (A2 + B2) * (C2 - D2);
    int result3 = (A3 + B3) * (C3 - D3);

    printf("%d %d %d\n", result1, result2, result3);

    return 0;
}
