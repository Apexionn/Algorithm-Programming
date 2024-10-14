#include <stdio.h>

int main() {
    char name[101];

    scanf("%[^\n]", name); 

    printf("%s-san\n", name);

    return 0;
}
