#include <stdio.h>

long long combination(int n, int r) {
    if (r > n - r) r = n - r;
    long long ans = 1;
    int i;

    for (i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

int main() {
    int N;
    scanf("%d", &N);

    if (N < 1 || N > 50) {
        printf("N harus berada di antara 1 dan 50.\n");
        return 1;
    }

    long long result = 0;
    for (int i = 1; i <= N; i++) {
        result += combination(N, i);
    }

    printf("%lld\n", result);

    return 0;
}