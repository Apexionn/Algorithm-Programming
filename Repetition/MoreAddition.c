#include <stdio.h>

int main(){
    int x, combi = 0;
    scanf("%d", &x);

    int n = x + 1;
    while(n > 0){
        combi += n;
        n--;
    }
    
    printf("%d\n", combi);
    return 0;
}