#include <stdio.h>
#include <string.h>

void reverseString(char *s, int start, int end) {
    if (start >= end) {
        return;
    }
    
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    reverseString(s, start + 1, end - 1);
}

int main() {
    int T;
    scanf("%d", &T);
    getchar();

    for (int t = 1; t <= T; t++) {
        char S[1001];
        fgets(S, sizeof(S), stdin);

        int len = strlen(S);
        if (S[len - 1] == '\n') {
            S[len - 1] = '\0';
            len--;
        }

        reverseString(S, 0, len - 1);
        printf("Case #%d: %s\n", t, S);
    }

    return 0;
}
