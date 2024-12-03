#include <stdio.h>

int main() {
    FILE *fin = fopen("testdata.in", "r");
    if (!fin) {
        printf("Error opening input file\n");
        return 1;
    }

    int a, b;
    if (fscanf(fin, "%d %d", &a, &b) != 2) {
        printf("Error reading input\n");
        fclose(fin);
        return 1;
    }

    fclose(fin);

    printf("%d\n", a + b);

    return 0;
}