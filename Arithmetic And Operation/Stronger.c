#include <stdio.h>

int main(){
    long long int N;
    scanf("%lld", &N);

    long long int basedamage = 0;
    long long int bonusdamage = 0;
    for (int i = 0; i < N; i++){
        basedamage += 100 + bonusdamage;
        bonusdamage += 50;
    }
    
    printf("%lld\n", basedamage);
    return 0;
}