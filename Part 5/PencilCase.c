#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    for (int i = 1; i <= T; i++) {
        int R, H;
        scanf("%d %d", &R, &H);  

        float surfaceArea = 2 * 3.14 * R * (R + H);

        printf("Case #%d: %.2f\n", i, surfaceArea);
    }

    return 0;
}
