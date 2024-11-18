#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);
        
        unsigned long long likes;
        if (N == 1) {
            likes = 0;
        } else if (N == 2) {
            likes = 1; 
        } else {
            unsigned long long prev1 = 1; 
            unsigned long long prev2 = 0; 
            for (int j = 3; j <= N; j++) {
                likes = prev1 + prev2; 
                prev2 = prev1; 
                prev1 = likes; 
            }
        }

        printf("Case #%d: %llu\n", i, likes); 
    }

    return 0;
}
