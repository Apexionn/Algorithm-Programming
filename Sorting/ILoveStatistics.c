#include <stdio.h>

void Merge(long long int arr[], const int left, const int mid, const int right) {
    const int nL = mid - left + 1;
    const int nR = right - mid;
    long long int ArrayL[nL], ArrayR[nR];
    for (int i = 0; i < nL; i++) {
        ArrayL[i] = arr[left + i];
    }
    for (int i = 0; i < nR; i++) {
        ArrayR[i] = arr[mid + i + 1];
    }
    int Index = left;
    int IndexL = 0;
    int IndexR = 0;
    while (IndexL < nL && IndexR < nR) {
        if (ArrayL[IndexL] < ArrayR[IndexR]) {
            arr[Index] = ArrayL[IndexL];
            Index++;
            IndexL++;
        } else {
            arr[Index] = ArrayR[IndexR];
            Index++;
            IndexR++;
        }
    }
    while (IndexL < nL) {
        arr[Index] = ArrayL[IndexL];
        Index++;
        IndexL++;
    }
    while (IndexR < nR) {
        arr[Index] = ArrayR[IndexR];
        Index++;
        IndexR++;
    }
}

void Divide(long long int arr[], const int left, const int right) {
    if(left >= right) {
        return;
    }
    const int mid = (left + right) / 2;
    Divide(arr, left, mid);
    Divide(arr, mid + 1, right);
    Merge(arr, left, mid, right);
}

int main() {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++) {
        int size;
        scanf("%d", &size);
        long long int arr[size];
        for (int j = 0; j < size; j++) {
            scanf("%lld", &arr[j]);
        }
        // sort
        Divide(arr, 0, size - 1);
        // 1 2 3 4 5 6
        double mean = 0;
        for (int j = 0; j < size; j++) {
            mean += arr[j];
        }
        double median = 0;
        if(size % 2 == 0) {
            median = (arr[((size + 1) / 2) - 1] + arr[((size + 1) / 2)]) / 2.00;
        } else {
            median = arr[((size + 1) / 2) - 1];
        }
        printf("Case #%d:\nMean : %.2lf\nMedian : %.2lf\n", i + 1, (mean / size), median);
    }
    return 0;
}
