#include <stdio.h>

int main() {
    int X, Y;  
    scanf("%d %d", &X, &Y);
    
    int garden[X][Y];
    
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            scanf("%d", &garden[i][j]);
        }
    }
    
    int T; 
    scanf("%d", &T);
    
    for (int t = 0; t < T; t++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        garden[a - 1][b - 1] = c;
    }
    
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            printf("%d", garden[i][j]);
            if (j < Y - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
