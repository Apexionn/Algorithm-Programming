#include <stdio.h>

int main() {
    int T, N; 
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%d", &N);

        printf("Case #%d:\n", i);

        for (int l = 0; l < N; l++){
            for (int j = N - 1; j > l; j--){
                printf(" ");
            }
        
            for (int k = 0; k <= l; k++){
                if ((N + 1) % 2 == 1){
                    if (k % 2 == 0){
                        printf("#");
                    } else {
                        printf("*");
                    }
                } else {
                    if (k % 2 == 0){
                        printf("*");
                    } else {
                        printf("#");
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}
