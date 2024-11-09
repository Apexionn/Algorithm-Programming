#include <stdio.h>

int main() {
    int T, N;

    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%d", &N);

        printf("Case #%d:\n", t);

        for (int i = 1; i <= N; i++) {
            if (i % 3 == 0 && i % 5 != 0) {
                printf("%d Jojo\n", i);
            } else if (i % 5 == 0 && i % 3 != 0) {
                printf("%d Jojo\n", i);
            } else {
                printf("%d Lili\n", i);
            }
        }
    }

    return 0;
}
