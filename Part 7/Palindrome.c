#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++){
        char str[100];
        scanf("%s", str);

        int lens = strlen(str);
        int isPalindrome = 1;
        
        for (int j = 0; j < lens / 2; j++){
            if (str[j] != str[lens - i - 1]){
                isPalindrome = 0;
                break;
            }
        }
        
        if (isPalindrome == 0) {
            printf("Case #%d: yes\n", i);
        } else {
            printf("Case #%d: no\n", i);
        }
        
    }
    


    return 0;
}