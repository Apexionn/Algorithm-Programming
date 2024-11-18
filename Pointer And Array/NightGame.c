#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); 
        
        int boxes[N]; 

        for (int i = 0; i < N; i++) {
            scanf("%d", &boxes[i]);
        }

        printf("Case #%d: ", t);
        for (int i = N - 1; i >= 0; i--) {
            printf("%d", boxes[i]);
            if (i > 0) {
                printf(" "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}
