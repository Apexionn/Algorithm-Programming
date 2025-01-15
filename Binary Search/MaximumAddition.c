#include <stdio.h>

void solveTestCase(long long testCaseNumber, long long n, long long m, long long arr[]) {
    long long maxLength = -1;
    long long left = 0, right = 0;
    long long currentSum = 0;

    while (right < n) {
        currentSum += arr[right];

        while (currentSum > m && left <= right) {
            currentSum -= arr[left];
            left++;
        }

        if (currentSum <= m) {
            long long currentLength = right - left + 1;
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }

        right++;
    }

    printf("Case #%lld: %lld\n", testCaseNumber, maxLength);
}

int main() {
    long long t;
    scanf("%lld", &t);

    for (long long testCase = 1; testCase <= t; testCase++) {
        long long n, m;
        scanf("%lld %lld", &n, &m);

        long long arr[n];
        for (long long i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        solveTestCase(testCase, n, m, arr);
    }

    return 0;
}
