#include <stdio.h>

int solve(int arr[], int n, int m) {
    int max_length = -1;
    
    for (int start = 0; start < n; start++) {
        int current_sum = 0;
        int current_length = 0;
        
        for (int end = start; end < n; end++) {
            current_sum += arr[end];
            
            if (current_sum > m) {
                break;
            }
            
            current_length++;
            
            if (current_length > max_length) {
                max_length = current_length;
            }
        }
    }
    
    return max_length;
}

int main() {
    int t;
    scanf("%d", &t);
    
    for (int test_case = 1; test_case <= t; test_case++) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        int arr[10004];  
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int result = solve(arr, n, m);
        
        printf("Case #%d: %d\n", test_case, result);
    }
    
    return 0;
}