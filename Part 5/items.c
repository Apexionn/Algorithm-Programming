#include <stdio.h>

int main(){
    int T;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        int N;
        scanf("%d", &N);
        
        long long int total = 0, A;

        for (int j = 0; j < N; j++)
        {
            scanf("%lld", &A);
            total += A;
        }

        printf("Case #%d: %lld\n", i, total);
        
    }
    


    return 0;
}