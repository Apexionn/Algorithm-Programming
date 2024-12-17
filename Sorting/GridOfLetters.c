#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareAscending(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int compareDescending(const void *a, const void *b) {
    return strcmp((char *)b, (char *)a);
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    char grid[R][C + 1];
    for (int i = 0; i < R; i++) {
        scanf("%s", grid[i]);
    }

    // Pengurutan pertama: setiap baris diurutkan ascending
    for (int i = 0; i < R; i++) {
        qsort(grid[i], C, sizeof(char), compareAscending);
    }

    // Pengurutan kedua: seluruh baris diurutkan descending berdasarkan lexicographical order
    qsort(grid, R, sizeof(grid[0]), compareDescending);

    for (int i = 0; i < R; i++) {
        printf("%s\n", grid[i]);
    }

    return 0;
}