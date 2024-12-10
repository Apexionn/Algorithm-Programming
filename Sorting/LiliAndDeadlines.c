#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[11];
    int deadline;
} Assignment;

int compare(const void *a, const void *b) {
    Assignment *assign1 = (Assignment *)a;
    Assignment *assign2 = (Assignment *)b;

    // Sort by deadline first
    if (assign1->deadline != assign2->deadline) {
        return assign1->deadline - assign2->deadline;
    }

    // If deadlines are the same, sort alphabetically
    return strcmp(assign1->title, assign2->title);
}

int main() {
    int n;
    
    scanf("%d", &n);

    Assignment assignments[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", assignments[i].title, &assignments[i].deadline);
    }

    qsort(assignments, n, sizeof(Assignment), compare);

    for (int i = 0; i < n; i++) {
        printf("%s\n", assignments[i].title);
    }

    return 0;
}
