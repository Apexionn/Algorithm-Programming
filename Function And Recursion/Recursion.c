#include <stdio.h>

long long int recursion(int A, int *count){
    if (A != 0 && A % 3 == 0){
        (*count)++;
    }

    if (A == 0){
        return 1;
    } else if (A == 1){
        return 2;
    } else if (A % 5 == 0){
        return A * 2;
    } else {
        return recursion(A - 1, count) + A + recursion(A - 2, count) + A - 2;
    }
}

int main(){
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++){
        int N;
        scanf("%d", &N);
        int call_count = 0;
        int result = recursion(N, &call_count);
        printf("Case #%d: %d %d\n", i + 1, result, call_count);
    }
    


    return 0;
}