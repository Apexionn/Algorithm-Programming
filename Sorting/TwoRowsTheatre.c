#include <stdio.h>
#include <stdlib.h>

void Merge(int arr[], int left, int mid, int right){
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
        } else {
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
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        Merge(arr, left, mid, right);
    }
}

int main(){
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++){
        int N;
        scanf("%d", &N);

        int heights[N];
        for (int j = 0; j < N; j++){
            scanf("%d", &heights[j]);
        }
        
        MergeSort(heights, 0, N - 1);

        int halfSize = N / 2;

        int UpMax = 0;
        for (int j = 0; j < halfSize - 1; j++){
            int diff = heights[j + 1] - heights[j];
            if (diff > UpMax) {
                UpMax = diff;
            }
        }

        int DownMax = 0;
        for (int j = halfSize; j < N - 1; j++){
            int diff = heights[j + 1] - heights[j];
            if (diff > DownMax) {
                DownMax = diff;
            }
        }
        
        if (UpMax > DownMax) {
            printf("Case #%d: %d\n", i, UpMax);
        } else {
            printf("Case #%d: %d\n", i, DownMax);
        }
    }   

    return 0;
}