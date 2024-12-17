#include <stdio.h>
#include <string.h>

void BubbleSortAlphabet(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char arr[100]; 
    printf("Masukkan string (tanpa ada spasi): "); // Misalnya Binus -> Binsu, Lintang -> Laginnt
    scanf("%s", arr);

    int n = strlen(arr); 

    BubbleSortAlphabet(arr, n);

    printf("String setelah diurutkan: %s\n", arr);

    return 0;
}
