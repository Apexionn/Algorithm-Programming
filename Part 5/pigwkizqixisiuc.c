#include <stdio.h>
#include <string.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, K;
        scanf("%d %d", &N, &K); // Read length of string and K value

        char S[N + 1];
        scanf("%s", S); // Read the string S

        printf("Case #%d: ", t);

        for (int i = 0; i < N; i++) {
            // Convert the character to its numeric value (a = 0, b = 1, ..., z = 25)
            int letter_value = S[i] - 'a';

            // Add K to the letter_value
            letter_value += K;

            // Apply the modulo operation to ensure the value is within 0-25
            letter_value = letter_value % 26;

            // Convert the number back to a letter
            char new_char = letter_value + 'a';

            // Print the new character
            printf("%c", new_char);
        }

        // Print a new line after each test case result
        printf("\n");
    }

    return 0;
}
