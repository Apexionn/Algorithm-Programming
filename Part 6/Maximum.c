#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N);
        
        int max1 = -1000001; 
        int max2 = -1000001;

        for (int i = 0; i < N; i++) {
            int value;
            scanf("%d", &value);
            
            if (value > max1) {
                max2 = max1;
                max1 = value;
            } else if (value > max2) {
                max2 = value;
            }
        }
        
        printf("Case #%d: %d\n", t, max1 + max2);
    }

    return 0;
}
