#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[11];
    int value;
} Student;

int compare(const void *a, const void *b) {
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;
    
    if (studentB->value != studentA->value) {
        return studentB->value - studentA->value; 
    }
    return strcmp(studentA->name, studentB->name);
}

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N);

        Student students[1000];

        for (int i = 0; i < N; i++) {
            char input[11 + 6]; 
            scanf("%s", input);
            sscanf(input, "%[^#]#%d", students[i].name, &students[i].value);
        }

        char queryName[11];
        scanf("%s", queryName);

        qsort(students, N, sizeof(Student), compare);

        int rank = -1;
        for (int i = 0; i < N; i++) {
            if (strcmp(students[i].name, queryName) == 0) {
                rank = i + 1; 
                break;
            }
        }

        printf("Case #%d: %d\n", t, rank);
    }

    return 0;
}
