#include <stdio.h>

int main(){
    char S[100];
    scanf("%[^\n]", S);

    printf("Happy Birthday to %s.\n", S);

    return 0;
}