#include <stdio.h>
#include <string.h>

int main(){
    int tc;

    scanf("%d",&tc);
    getchar();

    for (int i = 0; i < tc; i++){
        char str[1000];

        scanf("%[^\n]",str);
        getchar();

        int len = strlen(str);

        printf("Case #%d : ",i + 1);

        for (int j = len - 1; j >= 0; j--){
            if (j == 0){
                printf("%c\n", str[j]);
            }
            else{
                printf("%c", str[j]);
            }
        }
    }
}