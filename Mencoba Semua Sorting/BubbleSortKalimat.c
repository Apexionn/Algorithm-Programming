#include <stdio.h>
#include <string.h>

void BubbleSortStrings(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) { 
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n = 5;
    char arr[5][100] = { "Lintang", "raihan", "Cobot", "doni", "azhar" }; 

    printf("Sebelum diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    BubbleSortStrings(arr, n);

    printf("\nSetelah diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
