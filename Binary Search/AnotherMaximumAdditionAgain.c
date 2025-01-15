#include <stdio.h>

void solve(int n, int arr[], int q, long long queries[]) {
    for (int k = 0; k < q; k++) {
        long long m = queries[k];
        long long sum = 0;
        int maxLength = -1;
        int left = 0;

        for (int right = 0; right < n; right++) {
            sum += arr[right];

            while (sum > m && left <= right) {
                sum -= arr[left];
                left++;
            }

            if (sum <= m) {
                int currentLength = right - left + 1;
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                }
            }
        }

        printf("Case #%d: %d\n", k + 1, maxLength);
    }
}

int main() {
    int n, q;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &q);
    long long queries[q];

    for (int i = 0; i < q; i++) {
        scanf("%lld", &queries[i]);
    }

    solve(n, arr, q, queries);

    return 0;
}
