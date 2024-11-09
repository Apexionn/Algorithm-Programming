#include <stdio.h>

int main(){
    int T, N;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {   
        scanf("%d", &N);

        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (j == k || j + k == N - 1 || j == 0 || k == 0 || j == N - 1 || k == N - 1)
                {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        
        printf("\n");
    }
    
    return 0;
}