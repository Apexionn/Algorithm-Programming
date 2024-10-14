#include <stdio.h>

int main(){
    long long int N, P, Pop = 0;
    scanf("%lld %lld", &N, &P);

    long long int balloon[N];
    for (int i = 0; i < N; i++){
        scanf("%lld", &balloon[i]);

        if (balloon[i] < P){
            Pop++;
        }
        
    }
    
    printf("%d\n", Pop);

    return 0;
}