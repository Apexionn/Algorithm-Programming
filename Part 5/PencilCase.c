#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    for (int i = 1; i <= T; i++) {
        int R, H;
        scanf("%d %d", &R, &H);  // Read radius and height for each test case

        // Surface area formula: 2 * π * R * (R + H), where π is 3.14
        float surfaceArea = 2 * 3.14 * R * (R + H);

        // Print the result with 2 decimal places
        printf("Case #%d: %.2f\n", i, surfaceArea);
    }

    return 0;
}
