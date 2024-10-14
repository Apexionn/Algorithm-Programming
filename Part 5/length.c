#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases
    
    for (int i = 1; i <= T; i++) {
        char N[1000]; 
        scanf("%s", N); 
        printf("Case #%d: %lu\n", i, strlen(N)); 
    }
    
    return 0;
}
