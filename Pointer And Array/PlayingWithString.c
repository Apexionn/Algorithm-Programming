#include <stdio.h>
#include <string.h>

int main(){
    int tc, a, b[10001], c[10001], len;
    char input[10001];

    scanf("%d", &tc);
    getchar();

    for (int i = 1; i <= tc; i++){
        scanf("%s", input);
        getchar();

        scanf("%d", &a);
        getchar();

        for (int j = 0; j < a; j++){
            scanf("%c %c", &b[j], &c[j]);
            getchar();
        }
        
        len = strlen(input);
        for (int j = 0; j < len; j++){
            for (int k = 0; k < a; k++){
                if (input[j] == b[k]){
                    input[j] = c[k];
                }
            }
        }
        
        printf("Case #%d: %s\n", i, input);
    }
    
    return 0;
}