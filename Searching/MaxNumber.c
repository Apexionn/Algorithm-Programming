#include <stdio.h>

void removeNumbers(int bag[], int *size, int number) {
    int i, j;
    for (i = 0; i < *size; i++) {
        if (bag[i] == number) {
            for (j = i; j < *size - 1; j++) {
                bag[j] = bag[j + 1];
            }
            (*size)--;
            i--; 
        }
    }
}

int findMax(int bag[], int size) {
    if (size == 0) {
        return -1;
    }
    int max = bag[0];
    for (int i = 1; i < size; i++) {
        if (bag[i] > max) {
            max = bag[i];
        }
    }
    return max;
}

int main() {
    int N, M;
    int bag[100];
    int size = 0;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%d", &bag[i]);
    }
    size = N;

    for (int i = 0; i < M; i++) {
        int numberToRemove;
        scanf("%d", &numberToRemove);
        removeNumbers(bag, &size, numberToRemove);
    }

    int maxNumber = findMax(bag, size);
    if (maxNumber == -1) {
        printf("Maximum number is -1\n");
    } else {
        printf("Maximum number is %d\n", maxNumber);
    }

    return 0;
}
