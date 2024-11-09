#include <stdio.h>

int main(){
    int T, X;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &X);

        for (int j = 0; j < X; j++)
        {
            for (int k = X - 1; k > j; k--)
            {
                printf(" ");
            }
            for (int l = 0; l < 2 * j + 1; l++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }
    


    return 0;
}