#include <stdio.h>

int call_count = 0;

long long int function(int N){    
    if (N == 0){
        return 1;
    }
    if (N == 1){
        return 2;
    }
    if (N % 3 == 0){
        call_count++;
    }
    if (N % 5 == 0){
        return N * 2;
    } 

    return function(N - 1) + N + function(N - 2) + N - 2;
}

int main(){
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++){
        int N;
        scanf("%d", &N);

        call_count = 0;
        int result = function(N);

        printf("Case #%d: %d %d\n", i, result, call_count);
    }
    

    return 0;
}