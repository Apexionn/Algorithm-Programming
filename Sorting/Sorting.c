#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
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

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int n;

    scanf("%d", &n);

    if (n < 2) {
        printf("Jumlah angka harus minimal 2.\n");
        return 1;
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    int maxDiff = 0;
    for (int i = 0; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff > maxDiff) {
            maxDiff = diff;
        }
    }


    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] == maxDiff) {
            printf("%d %d ", arr[i], arr[i + 1]);
        }
    }
    printf("\n");

    return 0;
}
