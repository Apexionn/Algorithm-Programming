#include <stdio.h>

int main() {
    int a, b, c, d;
    double sum;

    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        sum = (double)a / 1 + (double)b / 2 + (double)c / 3 + (double)d / 4 +
              (double)b / 2 + (double)c / 3 + (double)d / 4 + (double)c / 3 +
              (double)c / 3 + (double)d / 4 + (double)c / 3 + (double)b / 2 +
              (double)d / 4 + (double)c / 3 + (double)b / 2 + (double)a / 1;

        printf("%.2f\n", sum);
    }

    return 0;
}
