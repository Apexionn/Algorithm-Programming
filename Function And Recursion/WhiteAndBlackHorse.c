#include <stdio.h>
#include <stdbool.h>
#include <string.h>

const int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
const int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

void convertPosition(char* pos, int* x, int* y) {
    *x = pos[0] - 'A';
    *y = pos[1] - '1';
}

bool isValid(int x, int y) {
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

bool canMeet(int x1, int y1, int x2, int y2, int moves, bool visited[8][8][8][8][11]) {
    if (moves < 0) return false;
    if (x1 == x2 && y1 == y2) return true;
    if (visited[x1][y1][x2][y2][moves]) return false;
    
    visited[x1][y1][x2][y2][moves] = true;
    
    for (int i = 0; i < 8; i++) {
        int new_x1 = x1 + dx[i];
        int new_y1 = y1 + dy[i];
        
        if (!isValid(new_x1, new_y1)) continue;
        
        for (int j = 0; j < 8; j++) {
            int new_x2 = x2 + dx[j];
            int new_y2 = y2 + dy[j];
            
            if (!isValid(new_x2, new_y2)) continue;
            
            if (canMeet(new_x1, new_y1, new_x2, new_y2, moves - 1, visited)) {
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
        
        bool visited[8][8][8][8][11] = {false};
        
        bool result = canMeet(x1, y1, x2, y2, N, visited);
        printf("Case #%d: %s\n", t, result ? "YES" : "NO");
    }
    
    return 0;
}