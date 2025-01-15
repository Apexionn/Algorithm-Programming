#include <stdio.h>

#define MAX 100

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int isValid(int x, int y, int n, int m, char house[MAX][MAX], int visited[MAX][MAX]) {
    return x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && house[x][y] == '.';
}

int floodFill(int x, int y, int n, int m, char house[MAX][MAX], int visited[MAX][MAX]) {
    visited[x][y] = 1; 
    int count = 1;     

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isValid(newX, newY, n, m, house, visited)) {
            count += floodFill(newX, newY, n, m, house, visited);
        }
    }

    return count;
}

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M; 
        scanf("%d %d", &N, &M);

        char house[MAX][MAX];
        int visited[MAX][MAX] = {0};

        int startX = 0, startY = 0;

        for (int i = 0; i < N; i++) {
            scanf("%s", house[i]);
            for (int j = 0; j < M; j++) {
                if (house[i][j] == 'S') {
                    startX = i;
                    startY = j;
                }
            }
        }

        int result = 0;
        for (int i = 0; i < 4; i++) {
            int newX = startX + dx[i];
            int newY = startY + dy[i];

            if (isValid(newX, newY, N, M, house, visited)) {
                result += floodFill(newX, newY, N, M, house, visited);
            }
        }

        printf("Case #%d: %d\n", t, result);
    }

    return 0;
}