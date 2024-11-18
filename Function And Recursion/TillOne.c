#include <stdio.h>

long long int formula(int N){
    if (N == 1){
        return 1;
    }
    if (N % 2 == 0){
        return formula(N / 2);
    }
    if (N % 2 == 1){
        return formula(N - 1) + formula(N + 1);
    }
    return 0;
}

int main(){
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        long long int N;
        scanf("%lld", &N);

        int result = formula(N);
        printf("Case #%d: %d\n", i, result);
    }
    

    return 0;
}