#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char message[1001], encrypted[1001], keys[1001];
        scanf("%s", message);
        
        int len = strlen(message);
        
        for (int i = 0; i < len; i++) {
            char ch = message[i];
            int key;

            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                encrypted[i] = ch;
                key = 0;
            } else {
                if (ch > 'U') {
                    encrypted[i] = 'U';
                    key = ch - 'U';
                } else if (ch > 'O') {
                    encrypted[i] = 'O';
                    key = ch - 'O';
                } else if (ch > 'I') {
                    encrypted[i] = 'I';
                    key = ch - 'I';
                } else if (ch > 'E') {
                    encrypted[i] = 'E';
                    key = ch - 'E';
                } else {
                    encrypted[i] = 'A';
                    key = ch - 'A';
                }
            }

            keys[i] = key + '0'; 
        }

        encrypted[len] = '\0'; 
        keys[len] = '\0';      

        printf("Case #%d:\n", t);
        printf("%s\n", encrypted);
        printf("%s\n", keys);
    }

    return 0;
}
