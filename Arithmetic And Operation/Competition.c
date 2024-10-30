#include <stdio.h>

int main(){
    int x, y;
    for (int i = 0; i < 4; i++){
        scanf("%d %d", &x, &y);
        printf("%d\n", x * y);
    }
    

    return 0;
}