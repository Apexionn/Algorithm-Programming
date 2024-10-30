#include <stdio.h>

int main(){
    int N;
    for (int i = 0; i < 3; i++){
        scanf("%d", &N);
        int mid = (N / 10) % 10;

        printf("%d\n", mid);
    }
    
    return 0;
}