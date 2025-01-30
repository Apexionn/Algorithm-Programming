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

int BinarySearch(int array[], int size, int target){
    int left = 0, right = size - 1;

    while (left <= right){
        int mid = left + (right - left) / 2;

        if (array[mid] == target){
            return mid;
        }
        
        if (array[mid] < target){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }

    return -1;
}

int main(){
    int size;
    scanf("%d", &size);

    int data[size];
    for (int i = 0; i < size; i++){
        scanf("%d", &data[i]);
    }
    
    MergeSort(data, 0, size - 1);

    int targetsize;
    scanf("%d", &targetsize);
    for (int i = 0; i < targetsize; i++){
        int target;
        scanf("%d", &target);

        int result = BinarySearch(data, size, target);
        if (result != -1){
            printf("%d\n", result + 1);
        } else{
            printf("-1\n");
        }
    }
    
    return 0;
}