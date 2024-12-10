#include <stdio.h>
#include <string.h>

typedef struct {
    char id[11];
    char name[21];
} Student;

int binarySearch(Student students[], int n, char *id) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(students[mid].id, id);
        if (cmp == 0) {
            return mid;
        } else if (cmp < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (!file) {
        printf("Failed to open file.\n");
        return 1;
    }

    int n;
    fscanf(file, "%d", &n);
    Student students[100];
    
    for (int i = 0; i < n; i++) {
        fscanf(file, "%s %s", students[i].id, students[i].name);
    }

    int t;
    fscanf(file, "%d", &t);
    char testID[11];
    
    for (int i = 0; i < t; i++) {
        fscanf(file, "%s", testID);
        int index = binarySearch(students, n, testID);
        if (index != -1) {
            printf("Case #%d: %s\n", i + 1, students[index].name);
        } else {
            printf("Case #%d: N/A\n", i + 1);
        }
    }

    fclose(file);
    return 0;
}
