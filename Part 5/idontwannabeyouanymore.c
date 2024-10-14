#include <stdio.h>
#include <ctype.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    getchar();

    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N);
        
        getchar();

        char S[N + 1];
        fgets(S, N + 1, stdin); 
        
        printf("Case #%d: ", t);

        for (int i = 0; S[i] != '\0'; i++) {
            if (isalpha(S[i])) {
                putchar(S[i]);
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
