#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int width, height;
        scanf("%d %d", &width, &height);

        printf("Case #%d:\n", t);

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    printf("#");
                } else {
                    printf(" ");
                }
            }
            printf("\n"); 
        }
    }

    return 0;
}
