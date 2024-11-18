#include <stdio.h>

int Ackermann(int M, int N){
    if (M == 0){
        return N + 1;
    }
    if (M > 0 && N == 0){
        return Ackermann(M - 1, 1);
    }
    if (M > 0 && N > 0){
        return Ackermann(M - 1, Ackermann(M, N - 1));
    }
    
    return 0;
}

int main(){
    int M, N;
    scanf("%d %d", &M, &N);

    int result = Ackermann(M, N);

    printf("result: %d\n", result);

    return 0;
}