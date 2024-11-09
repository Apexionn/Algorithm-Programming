#include <stdio.h>

int main(){
    int T, K, N, M;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++){
        scanf("%d %d %d", &K, &N, &M);
        int result = N + M;
        if (result >= K){
            printf("Case #%d: yes\n", i);
        } else {
            printf("Case #%d: no\n", i);
        }
    }
    return 0;
}