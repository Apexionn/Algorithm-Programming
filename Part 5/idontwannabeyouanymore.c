#include <stdio.h>
#include <ctype.h> // For checking characters with isalpha()

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    // Consume the newline after T
    getchar();

    for (int t = 1; t <= T; t++) {
        int N; // Length of the string
        scanf("%d", &N);
        
        // Consume the newline after N
        getchar();

        char S[N + 1]; // Input string with length N
        fgets(S, N + 1, stdin); // Read the input string
        
        // Output the case number
        printf("Case #%d: ", t);

        // Iterate through the string and print only the alphabet characters
        for (int i = 0; S[i] != '\0'; i++) {
            if (isalpha(S[i])) {
                putchar(S[i]);
            }
        }
        
        // Print a newline after each case
        printf("\n");
    }
    
    return 0;
}
