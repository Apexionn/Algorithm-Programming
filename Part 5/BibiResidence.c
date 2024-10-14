#include <stdio.h>
#include <limits.h> 

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N);

        int heights[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &heights[i]);
        }

        int min_diff = INT_MAX;

        for (int i = 1; i < N; i++) {
            int diff = heights[i] - heights[i - 1];
            if (diff < 0) {
                diff = -diff;
            }
            if (diff < min_diff) {
                min_diff = diff;
            }
        }

        printf("Case #%d: %d\n", t, min_diff);
    }

    return 0;
}
