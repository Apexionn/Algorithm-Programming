#include <stdio.h>

int main(){
    long long int N;
    scanf("%lld", &N);

    long long int points = 0;
    long long int bonuspoints = 0;
    for (int i = 0; i < N; i++){
        points += 100 + bonuspoints;
        bonuspoints += 50;
    }
    
    printf("%lld\n", points);
    return 0;
}