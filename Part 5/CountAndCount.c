#include <stdio.h>

int main() {
    int T, N;

    // Read the number of test cases
    scanf("%d", &T);

    // Process each test case
    for (int t = 1; t <= T; t++) {
        // Read the value of N for the current test case
        scanf("%d", &N);

        // Print the case number
        printf("Case #%d:\n", t);

        // Count from 1 to N and determine who shouts
        for (int i = 1; i <= N; i++) {
            if (i % 3 == 0 && i % 5 != 0) {
                // Jojo shouts for multiples of 3 that are not multiples of 5
                printf("%d Jojo\n", i);
            } else if (i % 5 == 0 && i % 3 != 0) {
                // Jojo shouts for multiples of 5 that are not multiples of 3
                printf("%d Jojo\n", i);
            } else {
                // Lili shouts for all other numbers
                printf("%d Lili\n", i);
            }
        }
    }

    return 0;
}
