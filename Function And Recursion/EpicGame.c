#include <stdio.h>

int Game(int N){
        if (N % 2 == 0){
            return N / 2;
        } else if(N % 2 == 1){
            return N * 3 + 1;
        }
    
    return 0;
}

int main(){
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++){
        long long int N;
        long long int func;
        scanf("%lld", &N);

        while (N != 1){
            func = Game(N);
        }

        printf("Case #%d: %lld\n", i, func);

    }
    

    return 0;
}