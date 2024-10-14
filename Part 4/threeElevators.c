#include <stdio.h>

int main() {
    int x, y, k;
    
    // Read input values for the floors of the elevators
    scanf("%d %d %d", &x, &y, &k);
    
    // Calculate the time t
    int t = k - x;
    
    // Check if both elevators can meet at k at time t
    if (t >= 0 && 2 * k == (x + y)) {
        printf("%d\n", t);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
