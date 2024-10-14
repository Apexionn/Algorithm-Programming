#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    int steps[N];  
    for (int i = 0; i < N; i++) {
        scanf("%d", &steps[i]);
    }
    
    int count = 1; 
    for (int i = 1; i < N; i++) {
        if (steps[i] == 1) {
            printf("%d ", count);
            count = 1;
        } else {
            count++; 
        }
    }
    
    // Print the last set's count
    printf("%d\n", count);
    
    return 0;
}
