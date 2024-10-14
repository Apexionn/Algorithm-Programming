#include <stdio.h>

void lazyCatererSequence(int N) {
    int pieces = 1;  
    printf("%d", pieces); 
    
    for (int i = 1; i < N; i++) {
        pieces += i;
        printf(" %d", pieces);  
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T); 

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);  

        printf("Case %d: ", t);
        lazyCatererSequence(N);  
    }

    return 0;
}
