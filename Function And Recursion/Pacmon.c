#include <stdio.h>

#define MAX 100

char grid[MAX][MAX];
int visited[MAX][MAX];
int foodCount;
int N, M;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {
    visited[x][y] = 1;

    if (grid[x][y] == '*') {
        foodCount++;
    }

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny] && grid[nx][ny] != '#') {
            dfs(nx, ny);
        }
    }
}

int main() {
    int T;

    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%d %d", &N, &M);

        int startX, startY;

        for (int i = 0; i < N; i++) {
            scanf("%s", grid[i]);
            for (int j = 0; j < M; j++) {
                if (grid[i][j] == 'P') {
                    startX = i;
                    startY = j;
                }
                visited[i][j] = 0; 
            }
        }

        foodCount = 0;
        dfs(startX, startY);

        printf("Case #%d: %d\n", t, foodCount);
    }

    return 0;
}
