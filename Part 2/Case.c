#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int K, N, M;
        scanf("%d %d %d", &K, &N, &M);

        if (N + M >= K) {
            printf("Case #%d: yes\n", i);
        } else {
            printf("Case #%d: no\n", i);
        }
    }

    return 0;
}
