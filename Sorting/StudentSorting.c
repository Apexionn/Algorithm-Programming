#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char id[11];  
    char name[21];  
} Student;

int compare_students(const void* a, const void* b) {
    const Student* student_a = (const Student*)a;
    const Student* student_b = (const Student*)b;
    
    return strcmp(student_a->id, student_b->id);
}

int main() {
    FILE* input_file = fopen("testdata.in", "r");
    if (input_file == NULL) {
        printf("Error opening input file\n");
        return 1;
    }
    
    int n;
    if (fscanf(input_file, "%d", &n) != 1) {
        printf("Error reading number of students\n");
        fclose(input_file);
        return 1;
    }
    
    if (n < 1 || n > 1000) {
        printf("Invalid number of students\n");
        fclose(input_file);
        return 1;
    }
    
    Student students[1000];
    
    for (int i = 0; i < n; i++) {
        if (fscanf(input_file, "%s %[^\n]", students[i].id, students[i].name) != 2) {
            printf("Error reading student data\n");
            fclose(input_file);
            return 1;
        }
    }
    
    fclose(input_file);
    
    qsort(students, n, sizeof(Student), compare_students);
    
    for (int i = 0; i < n; i++) {
        printf("%s %s\n", students[i].id, students[i].name);
    }
    
    return 0;
}