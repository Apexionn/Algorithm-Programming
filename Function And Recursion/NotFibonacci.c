#include <stdio.h>

int main() {
    int F0, F1, K;

    scanf("%d %d", &F0, &F1);

    scanf("%d", &K);

    if (K == 1) {
        printf("%d\n", F0);
        return 0;
    }
    if (K == 2) {
        printf("%d\n", F1);
        return 0;
    }

    int current;
    for (int i = 3; i <= K; i++) {
        current = F0 + F1;
        F0 = F1;
        F1 = current;
    }

    printf("%d\n", current);

    return 0;
}
