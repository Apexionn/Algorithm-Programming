#include <stdio.h>
#include <string.h>

// Function to merge two subarrays
void merge(char* arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // Size of left subarray
    int n2 = right - mid;     // Size of right subarray

    // Temporary arrays
    char* L[n1];
    char* R[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        // Use strcmp for string comparison
        if (strcmp(L[i], R[j]) <= 0) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to perform merge sort
void mergeSort(char* arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    // Array of strings
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
