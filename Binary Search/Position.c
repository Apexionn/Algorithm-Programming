#include <stdio.h>

int findPosition(int arr[], int n, int key) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            result = mid + 1; 
            high = mid - 1;  
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N], Q[M];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < M; i++) {
        scanf("%d", &Q[i]);
    }

    for (int i = 0; i < M; i++) {
        int position = findPosition(A, N, Q[i]);
        printf("%d\n", position);
    }

    return 0;
}
