#include <stdio.h>

int main() {
    int T; 

    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, X, Y;

        scanf("%d %d %d", &N, &X, &Y);

        if (N == 0) {
            printf("Case #%d: %d\n", t, X);
            continue;
        }
        if (N == 1) {
            printf("Case #%d: %d\n", t, Y);
            continue;
        }

        int current;
        for (int i = 2; i <= N; i++) {
            current = Y - X;
            X = Y;
            Y = current;
        }

        printf("Case #%d: %d\n", t, current);
    }

    return 0;
}
