#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        
        int testResults[N], minResults[N];
        int failedCount = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &testResults[i]);
        }
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &minResults[i]);
        }
        
        for (int i = 0; i < N; i++) {
            if (testResults[i] < minResults[i]) {
                failedCount++;
            }
        }
        
        printf("Case #%d: %d\n", t, failedCount);
    }
    
    return 0;
}
