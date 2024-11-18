#include <stdio.h>

int main(){
    int tc, len, lives, a, flag, dead;
    char path[100005];
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++){
        flag = 0;
        dead = 0;
        scanf("%d %d", &len, &lives);
        scanf("%s", &path);

        for (int j = 0; j < len; j++){
            if(flag == 1){
                if (path[j] == '1'){
                    flag = 0;
                }
            } else {
                if (path[j] == '0'){
                    a++;
                }
                if (path[j] == '1'){
                    a = 0;
                    flag = 1;
                }
            }
            if (a >= lives){
                dead = 1;
                break;
            }
        }

        if (dead == 1){
            printf("Case #%d: Dead\n", i + 1);
        } else{
            printf("Case #%d: Alive\n", i + 1);
        }
    }
    
    return 0;
}