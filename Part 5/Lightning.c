#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    for (int t = 1; t <= T; t++) {
        // Read A, B, C, D, E, F for the current test case
        int A, B, C, D, E, F;
        scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);

        // Print the case number
        printf("Case #%d: ", t);

        // Print the letters according to the specified counts
        for (int i = 0; i < A; i++) {
            printf("a");
        }
        for (int i = 0; i < B; i++) {
            printf("s");
        }
        for (int i = 0; i < C; i++) {
            printf("h");
        }
        for (int i = 0; i < D; i++) {
            printf("i");
        }
        for (int i = 0; i < E; i++) {
            printf("a");
        }
        for (int i = 0; i < F; i++) {
            printf("p");
        }

        // Move to the next line after each test case output
        printf("\n");
    }

    return 0;
}
