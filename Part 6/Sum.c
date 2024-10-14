#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int X; 
        scanf("%d", &X);
        
        int array[X][X];
        int column_sum[X]; 
        
        for (int i = 0; i < X; i++) {
            column_sum[i] = 0;
        }
        
        for (int i = 0; i < X; i++) {
            for (int j = 0; j < X; j++) {
                scanf("%d", &array[i][j]);
                column_sum[j] += array[i][j];
            }
        }
        
        printf("Case #%d: ", t);
        for (int i = 0; i < X; i++) {
            printf("%d", column_sum[i]);
            if (i < X - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
