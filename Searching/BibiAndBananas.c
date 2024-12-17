#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        int N, K;
        scanf("%d %d", &N, &K);

        int A[N];
        int countBanana = 0;
        for (int j = 0; j < N; j++){
            scanf("%d", &A[j]);

            if (A[j] >= K){
                countBanana++;
            }
        }

        printf("Case #%d: %d\n", i + 1, countBanana);
    }

    return 0;
}