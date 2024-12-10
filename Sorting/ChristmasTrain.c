#include <stdio.h>

int bubbleSort(int arr[], int n, int x) {
    int totalTime = 0;
    int temp;
    int swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                // Increment total time by swap time
                totalTime += x;
                swapped = 1;
            }
        }
        
        // If no swapping occurred, array is already sorted
        if (swapped == 0) {
            break;
        }
    }
    
    return totalTime;
}

int main() {
    int T; 
    scanf("%d", &T);
    
    for (int testCase = 1; testCase <= T; testCase++) {
        int N, X;
        scanf("%d %d", &N, &X);
        
        int carriages[500];
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &carriages[i]);
        }
        
        int totalTime = bubbleSort(carriages, N, X);
        printf("Case #%d: %d\n", testCase, totalTime);
    }
    
    return 0;
}