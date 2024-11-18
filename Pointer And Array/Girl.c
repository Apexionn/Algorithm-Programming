#include <stdio.h>
#include <string.h>

int countDistinctCharacters(char *s) {
    int count[26] = {0};  
    int distinct = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (count[s[i] - 'a'] == 0) { 
            distinct++;
        }
        count[s[i] - 'a']++;
    }

    return distinct;
}

int main() {
    int T;
    scanf("%d", &T); 

    for (int i = 1; i <= T; i++) {
        char S[100001]; 
        scanf("%s", S);  

        int distinctChars = countDistinctCharacters(S);

        if (distinctChars % 2 == 0) {
            printf("Case #%d: Yay\n", i);  // Female
        } else {
            printf("Case #%d: Ewwww\n", i);  // Male
        }
    }

    return 0;
}
