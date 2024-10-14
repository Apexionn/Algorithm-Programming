#include <stdio.h>
#include <string.h>

int main() {
    int n;
    
    // Input the number of test cases
    scanf("%d", &n);
    
    // Iterate through each case
    for (int i = 1; i <= n; i++) {
        char str[101]; // Assuming max length of string is 100
        scanf("%s", str);
        
        printf("Case %d: ", i);
        
        // Convert each character to its ASCII value
        for (int j = 0; j < strlen(str); j++) {
            printf("%d", str[j]);
            if (j != strlen(str) - 1) {
                printf("-");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
