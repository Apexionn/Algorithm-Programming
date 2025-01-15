#include <stdio.h>
#include <stdbool.h>

const int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

void convertPosition(char *pos, int *x, int *y) {
    *x = pos[0] - 'A';
    *y = pos[1] - '1';
}

bool isValidPosition(int x, int y) {
    return (x >= 0 && x < 8 && y >= 0 && y < 8);
}

bool canKnightsMeet(int x1, int y1, int x2, int y2, int n) {
    if (n < 0) return false;
    if (x1 == x2 && y1 == y2) return true;
    if (n == 0) return false;
    
    for (int i = 0; i < 8; i++) {
        int newX1 = x1 + dx[i];
        int newY1 = y1 + dy[i];
        
        if (!isValidPosition(newX1, newY1)) continue;
        
        for (int j = 0; j < 8; j++) {
            int newX2 = x2 + dx[j];
            int newY2 = y2 + dy[j];
            
            if (!isValidPosition(newX2, newY2)) continue;
            
            if (canKnightsMeet(newX1, newY1, newX2, newY2, n - 1)) {
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N;
        char pos1[3], pos2[3];
        scanf("%d", &N);
        scanf("%s %s", pos1, pos2);
        
        int x1, y1, x2, y2;
        convertPosition(pos1, &x1, &y1);
        convertPosition(pos2, &x2, &y2);
        
        printf("Case #%d: %s\n", t, canKnightsMeet(x1, y1, x2, y2, N) ? "YES" : "NO");
    }
    
    return 0;
}