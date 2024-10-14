#include <stdio.h>

int main(){
    int T, A, B;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d %d", &A, &B);
        if(A > B){
            printf("Case #%ld: Go-Jo\n", i + 1);
        }else{
            printf("Case #%ld: Bi-Pay\n", i + 1);
        }
    }        
}