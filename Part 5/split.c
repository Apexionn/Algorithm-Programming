#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N);
        
        int arr[N];
        int total_sum = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
            total_sum += arr[i];
        }
        
        if (total_sum % 2 != 0) {
            printf("Case #%d: No\n", t);
            continue;
        }
        
        int left_sum = 0;
        int half_sum = total_sum / 2;
        int possible = 0;
        
        for (int i = 0; i < N; i++) {
            left_sum += arr[i];
            if (left_sum == half_sum) {
                possible = 1; 
                break;
            }
        }
        
        if (possible) {
            printf("Case #%d: Yes\n", t);
        } else {
            printf("Case #%d: No\n", t);
        }
    }
    
    return 0;
}
