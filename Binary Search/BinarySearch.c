#include <stdio.h>
#include <math.h>

long double sum_of_squares(long long n) {
    long double sum = (long double)n * (n + 1) * (2 * n + 1) / 6;
    return sum;
}

long long find_smallest_n(long long m) {
    long long left = 1;
    long long right = 1000000; 
    
    while (sum_of_squares(right) < m) {
        right *= 2;
    }
    
    while (left < right) {
        long long mid = left + (right - left) / 2;
        long double sum = sum_of_squares(mid);
        
        if (sum >= m) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    return left;
}

int main() {
    int t;
    scanf("%d", &t);
    
    for (int case_num = 1; case_num <= t; case_num++) {
        long long m;
        scanf("%lld", &m);
        
        long long result = find_smallest_n(m);
        printf("Case #%d: %lld\n", case_num, result);
    }
    
    return 0;
}