#include <stdio.h>
#include <string.h>

int isPalindromeRecursive(const char *str, int left, int right) {
    if (left >= right) {
        return 1;
    }
    if (str[left] != str[right]) {
        return 0;
    }
    return isPalindromeRecursive(str, left + 1, right - 1);
}

void checkPalindrome(int caseNum, const char *str) {
    int length = strlen(str);
    if (isPalindromeRecursive(str, 0, length - 1)) {
        printf("Case #%d: yes\n", caseNum);
    } else {
        printf("Case #%d: no\n", caseNum);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    getchar(); 

    for (int i = 1; i <= T; i++) {
        char S[1001];
        fgets(S, 1001, stdin);
        S[strcspn(S, "\n")] = '\0'; 
        checkPalindrome(i, S);
    }

    return 0;
}
