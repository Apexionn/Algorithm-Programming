#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        int N;

        scanf("%d", &N);

        int map[N][N];
        long long int columnSum[N];

        for (int j = 0; j < N; j++){
            columnSum[j] = 0;
        }
        
        for (int j = 0; j < N; j++){
            for (int k = 0; k < N; k++){
                scanf("%d", &map[j][k]);
                columnSum[k] += map[j][k];
            }
        }
        
        printf("Case #%d: ", i);
        for (int j = 0; j < N; j++){
            printf("%lld", columnSum[j]);
            if (j < N - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}