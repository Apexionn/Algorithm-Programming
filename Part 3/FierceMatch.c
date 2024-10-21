#include <stdio.h>

int main() {
    int X, Y;
    char operator;

    printf("");

    if (scanf("%d %c %d", &X, &operator, &Y) == 3) {
        if (operator == '+') {
            int result = X + Y;

            printf("%d\n", result);
        }
    }

    return 0;
}
