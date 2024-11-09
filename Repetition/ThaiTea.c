#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        int total_drunk = 0; 
        int full_bottles = A; 
        int empty_bottles = 0;
        
        while (full_bottles > 0) {
            total_drunk += full_bottles; 
            empty_bottles += full_bottles;
            full_bottles = empty_bottles / B;
            empty_bottles = empty_bottles % B;
        }

        printf("Case #%d: %d\n", t, total_drunk);
    }

    return 0;
}
