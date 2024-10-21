#include <stdio.h>

int main() {
    int X, Y;

    scanf("%d %d", &X, &Y);

    if (X < 1 || X > Y || Y > 1000000) {
        return 1;
    }

    double persentase = (double)X / Y * 100;

    printf("%.2lf%\n", persentase);

    return 0;
}