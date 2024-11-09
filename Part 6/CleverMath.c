#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int result = 0; 
        int multiplier = 1; 
        
        while (A > 0 || B > 0) {
            int digitA = A % 10;
            int digitB = B % 10;
            
            int digitResult = (digitA + digitB) % 10;

            result += digitResult * multiplier;

            A /= 10;
            B /= 10;
            multiplier *= 10; 
        }

        printf("Case #%d: %d\n", caseNum, result);
    }

    return 0;
}
