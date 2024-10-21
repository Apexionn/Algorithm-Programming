#include <stdio.h>

int main() {
    float P, M, D;

    scanf("%f %f %f", &P, &M, &D);

    float totalDamage = (P * 0.2) + (M * 0.3) + (D * 0.5);

    printf("%.2f\n", totalDamage);

    return 0;
}
