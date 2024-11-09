#include <stdio.h>
#include <string.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, K;
        scanf("%d %d", &N, &K);

        char S[N + 1];
        scanf("%s", S); 

        printf("Case #%d: ", t);

        for (int i = 0; i < N; i++) {
            int letter_value = S[i] - 'a';

            letter_value += K;
            letter_value = letter_value % 26;
            char new_char = letter_value + 'a';

            printf("%c", new_char);
        }

        printf("\n");
    }

    return 0;
}
