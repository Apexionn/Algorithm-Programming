#include <stdio.h>
#include <string.h>

int main() {
    int T;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    // Process each test case
    for (int t = 1; t <= T; ++t) {
        char S[1001];  // Assuming the maximum length of the string is 1000
        scanf("%s", S);  // Read the string
        
        // Print the case number
        printf("Case %d: ", t);
        
        // Print the ASCII values of each character
        int len = strlen(S);
        for (int i = 0; i < len; ++i) {
            printf("%d", S[i]);  // Print the ASCII value
            if (i < len - 1) {
                printf("-");  // Print the dash between values
            }
        }
        printf("\n");  // Move to the next line after each test case
    }
    
    return 0;
}
