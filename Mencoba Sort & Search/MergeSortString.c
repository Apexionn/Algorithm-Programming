#include <stdio.h>
#include <string.h>

void merge(char* arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  
    int n2 = right - mid;    \

    char* L[n1];
    char* R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (strcmp(L[i], R[j]) <= 0) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(char* arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    char* arr[] = {"apple", "orange", "banana", "grape", "kiwi"};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    mergeSort(arr, 0, size - 1);

    printf("\nSorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
