#include <stdio.h>
#include <string.h>

void generateFiboString(char *result, int n, char *s0, char *s1) {
    if (n == 0) {
        strcpy(result, s0);
    } else if (n == 1) {
        strcpy(result, s1);
    } else {
        char prev1[32768] = {0};
        char prev2[32768] = {0};
        strcpy(prev2, s0);
        strcpy(prev1, s1);

        for (int i = 2; i <= n; i++) {
            char temp[32768] = {0};
            strcpy(temp, prev1);
            strcat(temp, prev2);
            strcpy(prev2, prev1);
            strcpy(prev1, temp);
        }
        strcpy(result, prev1);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int n;
        char s0[2], s1[2];
        scanf("%d %s %s", &n, s0, s1);

        char result[32768] = {0};
        generateFiboString(result, n, s0, s1);

        printf("Case #%d: %s\n", t, result);
    }

    return 0;
}
