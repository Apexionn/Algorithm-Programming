#include <stdio.h>

void merge(long long arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    long long L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(long long arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int N; 
    scanf("%d", &N);

    long long Xi[N]; 
    for (int i = 0; i < N; i++) {
        scanf("%lld", &Xi[i]);
    }

    long long Y; 
    scanf("%lld", &Y);

    mergeSort(Xi, 0, N - 1);

    int count = 0;

    for (int i = 0; i < N; i++) {
        if (Y >= Xi[i]) {
            Y -= Xi[i]; 
            count++;    
        } else {
            break; 
        }
    }

    printf("%d\n", count); 
    return 0;
}
