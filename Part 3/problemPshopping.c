#include <stdio.h>

int main() {
    int N[4], P[4];
    double originalPrice[4];

    for (int i = 0; i < 4; i++) {
        // Read discount percentage and discounted price for each item
        scanf("%d %d", &N[i], &P[i]);

        // Calculate the original price from discount and discounted price
        originalPrice[i] = P[i] / (1.0 - N[i] / 100.0);
    }

    for (int i = 0; i < 4; i++) {
        // Output the calculated original price with two decimal places
        printf("$%.2f\n", originalPrice[i]);
    }

    return 0;
}
