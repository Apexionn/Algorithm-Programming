#include <stdio.h>

int main(){
    long long int N;

    scanf("%lld", &N);

    long long int Ai[N];
    long long int total = 0;

    for (int i = 0; i < N; i++){
        scanf("%lld", &Ai[i]);

        if (Ai[i] > 0){
            total += Ai[i];
        }
    }

    printf("%lld\n", total);

    return 0;
}