#include <stdio.h>

int main() {
    int x, y, k;
    
    scanf("%d %d %d", &x, &y, &k);
    
    int t = k - x;
    
    if (t >= 0 && 2 * k == (x + y)) {
        printf("%d\n", t);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
