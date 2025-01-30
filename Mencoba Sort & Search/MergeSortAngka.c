#include <stdio.h>

void merge(int arr[], int left, int mid, int right){
    int nL = mid - left + 1;
    int nR = right - mid;

    int L[nL], R[nR];
    for (int i = 0; i < nL; i++){
        L[i] = arr[left + i];
    }
    for (int i = 0; i < nR; i++){
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < nL && j < nR){
        if (L[i] <= R[j]){
            arr[k++] = L[i++];
        } else{
            arr[k++] = R[j++];
        }
    }
    
    while (i < nL){
        arr[k++] = L[i++];
    }
    while (j < nR){
        arr[k++] = R[j++];
    }
}

void MergeSort(int arr[], int left, int right){
    if (left < right){
        int mid = left + (right - left) / 2;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
    
}


int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        printf("\n");
    }

    mergeSort(arr, 0, size - 1);

    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
