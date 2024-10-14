#include <stdio.h>

int main(){

    int T, N, A;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int EvenGroup = 0, OddGroup = 0;
        scanf("%d", &N);

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A);

            if (A % 2 == 0 )
            {
                EvenGroup++;
            } else {
                OddGroup++;
            }
        }
        printf("Odd Group : %d integer(s).\n", OddGroup);
        printf("Even Group : %d integer(s).\n", EvenGroup);
    }

    return 0;
}