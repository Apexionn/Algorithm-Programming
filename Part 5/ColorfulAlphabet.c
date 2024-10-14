#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N); 

        char result[27]; 

        for (int i = 0; i < N; i++) {
            result[i] = 'a' + i;
        }
        result[N] = '\0'; 

        printf("Case #%d: %s\n", t, result);
    }

    return 0;
}
