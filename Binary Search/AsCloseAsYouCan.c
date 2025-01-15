#include <stdio.h>

#define MAX_N 100000
#define MAX_Q 30000

long long prefixSum[MAX_N + 1];

int findIndex(int n, long long m) {
    int low = 1, high = n, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (prefixSum[mid] <= m) {
            ans = mid;
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    return ans;
}

int main() {
    int n, q;
    scanf("%d", &n);
    
    prefixSum[0] = 0;
    for (int i = 1; i <= n; i++) {
        long long value;
        scanf("%lld", &value);
        prefixSum[i] = prefixSum[i - 1] + value;
    }

    scanf("%d", &q);

    for (int i = 1; i <= q; i++) {
        long long m;
        scanf("%lld", &m);
        int result = findIndex(n, m);
        printf("Case #%d: %d\n", i, result);
    }

    return 0;
}
