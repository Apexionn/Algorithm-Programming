#include <stdio.h>
#include <string.h>

int main(){
    char friendNames[100][41];
    char treeNames[100][41];
    int n, t;
    char testCases[41][41];

    FILE *file = fopen("testdata.in", "r");
    if (!file){
        printf("Error: Cannot Open File testdata.in");
        return 1;
    }
    
    fscanf(file, "%d", &n);

    for (int i = 0; i < n; i++){
        fscanf(file, " %40[^#]#%40[^\n]", friendNames[i], treeNames[i]);
    }
    
    fscanf(file, "%d", &t);

    for (int i = 0; i < t; i++){
        fscanf(file, " %40[^\n]", testCases[i]);
    }
    
    fclose(file);

    for (int i = 0; i < t; i++){
        int found = 0;
        for (int j = 0; j < n; j++){
            if (strcmp(testCases[i], friendNames[j]) == 0){
                printf("Case #%d: %s\n", i + 1, treeNames[j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Case #%d: N/A\n", i + 1);
        }
    }
    

    return 0;
}
