#include <stdio.h>

int main(){
    int A = 2;
    int *Ap = &A;

    printf("%d\n", &A);

    printf("%d\n", *Ap);


    return 0;
}