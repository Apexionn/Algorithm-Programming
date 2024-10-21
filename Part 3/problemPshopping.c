#include <stdio.h>

int main() {
    int N[4], P[4];
    double originalPrice[4];

    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &N[i], &P[i]);

        originalPrice[i] = P[i] / (1.0 - N[i] / 100.0);
    }

    for (int i = 0; i < 4; i++) {
        printf("$%.2f\n", originalPrice[i]);
    }

    return 0;
}
