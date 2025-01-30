#include <stdio.h>

int main(){
    FILE *file = fopen("testdata.in", "r");

    int a, b;
    fscanf(file, "%d %d", &a, &b);

    fclose(file);

    printf("%d\n", a + b);
    return 0;
}