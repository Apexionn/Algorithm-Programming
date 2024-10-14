#include <stdio.h>
#include <string.h>

int countDistinctCharacters(char *s) {
    int count[26] = {0};  // Only 26 lowercase letters
    int distinct = 0;

    // Count the occurrence of each character
    for (int i = 0; s[i] != '\0'; i++) {
        if (count[s[i] - 'a'] == 0) {  // 'a' maps to 0, 'b' to 1, ..., 'z' to 25
            distinct++;
        }
        count[s[i] - 'a']++;
    }

    return distinct;
}

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    for (int i = 1; i <= T; i++) {
        char S[100001];  // Username, maximum length is 10^5 + 1 for null terminator
        scanf("%s", S);  // Read username

        int distinctChars = countDistinctCharacters(S);

        // Check if the number of distinct characters is even or odd
        if (distinctChars % 2 == 0) {
            printf("Case #%d: Yay\n", i);  // Female
        } else {
            printf("Case #%d: Ewwww\n", i);  // Male
        }
    }

    return 0;
}
