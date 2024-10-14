#include <stdio.h>

int main() {
    int X, Y;
    char operator;

    // Prompt the user for input
    printf("");

    // Read the input in the format "X operator Y"
    if (scanf("%d %c %d", &X, &operator, &Y) == 3) {
        if (operator == '+') {
            // Compute the sum
            int result = X + Y;

            // Print the result directly
            printf("%d\n", result);
        }
    }

    return 0;
}
