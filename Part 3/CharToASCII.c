#include <stdio.h>
#include <string.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        char str[101]; 
        scanf("%s", str);
        
        printf("Case %d: ", i);
        
        for (int j = 0; j < strlen(str); j++) {
            printf("%d", str[j]);
            if (j != strlen(str) - 1) {
                printf("-");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
