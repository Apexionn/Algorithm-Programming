#include <stdio.h>

int operations(int A){
    if (A % 2 == 0){
        return A / 2;
    }
    if (A % 2 == 1){
        return A * 3 + 1;
    }
    
    return 1;
}

int main(){
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++){
        int A, B;
        scanf("%d %d", &A, &B);

        while (A != B){
            A = operations(A);

            if (A == 1){
                break;
            }
        }

        if (A == B){
            printf("Case #%d: YES\n", i);
        } else {
            printf("Case #%d: NO\n", i);
        }
    }

    return 0;
}