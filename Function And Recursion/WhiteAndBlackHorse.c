#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define BOARD_SIZE 8

// Semua langkah kuda dalam catur
int knightMoves[8][2] = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};

// Konversi huruf kolom ke indeks (A -> 0, B -> 1)
int columnToIndex(char column) {
    return toupper(column) - 'A';
}

// Fungsi rekursif untuk mengecek apakah kuda dapat bertemu
bool canMeet(int x1, int y1, int x2, int y2, int stepsLeft) {
    if (x1 == x2 && y1 == y2) {
        return true;
    }

    if (stepsLeft == 0) {
        return false;
    }

    for (int i = 0; i < 8; i++) {
        int newX1 = x1 + knightMoves[i][0];
        int newY1 = y1 + knightMoves[i][1];

        if (newX1 >= 0 && newX1 < BOARD_SIZE && newY1 >= 0 && newY1 < BOARD_SIZE) {
            if (canMeet(newX1, newY1, x2, y2, stepsLeft - 1)) {
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
        char start1[3], start2[3];

        scanf("%d", &N);
        scanf("%s %s", start1, start2);

        int x1 = columnToIndex(start1[0]);
        int y1 = start1[1] - '1';
        int x2 = columnToIndex(start2[0]);
        int y2 = start2[1] - '1';

        if (canMeet(x1, y1, x2, y2, N)) {
            printf("Case #%d: YES\n", t);
        } else {
            printf("Case #%d: NO\n", t);
        }
    }

    return 0;
}
