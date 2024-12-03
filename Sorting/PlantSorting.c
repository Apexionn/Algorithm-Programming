#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[40 + 1];
} Plant;

int compare(const void *a, const void *b) {
    Plant *plantA = (Plant *)a;
    Plant *plantB = (Plant *)b;
    return strcmp(plantA->name, plantB->name);
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (!file) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    int N;
    fscanf(file, "%d\n", &N);

    Plant plants[1000];
    for (int i = 0; i < N; i++) {
        fscanf(file, "%d#%[^\n]\n", &plants[i].id, plants[i].name);
    }
    fclose(file);

    qsort(plants, N, sizeof(Plant), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %s\n", plants[i].id, plants[i].name);
    }

    return 0;
}
