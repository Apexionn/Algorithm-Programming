#include <stdio.h>

void calculateLeaves(int index, int n, int *array, int sum) {
    int left = 2 * index;     
    int right = 2 * index + 1;

    sum += array[index - 1];

    if (left > n && right > n) {
        printf("%d\n", sum); 
        return;
    }

    if (left <= n) {
        calculateLeaves(left, n, array, sum);
    }

    if (right <= n) {
        calculateLeaves(right, n, array, sum);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); 

        int array[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &array[i]);
        }

        printf("Case #%d:\n", t);
        calculateLeaves(1, N, array, 0); 
    }

    return 0;
}
