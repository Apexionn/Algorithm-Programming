#include <stdio.h>
#include <string.h>

int main() {
    int T;
    
    scanf("%d", &T);
    
    for (int t = 1; t <= T; ++t) {
        char S[1001]; 
        scanf("%s", S);  
        
        printf("Case %d: ", t);
        
        int len = strlen(S);
        for (int i = 0; i < len; ++i) {
            printf("%d", S[i]); 
            if (i < len - 1) {
                printf("-");
            }
        }
        printf("\n"); 
    }
    
    return 0;
}
