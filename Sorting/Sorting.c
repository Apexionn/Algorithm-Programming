#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N);

    if (N < 2 || N > 10500) {
        printf("Invalid number of elements\n");
        return 1;
    }

    int arr[10500];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] < -10000000 || arr[i] > 10000000) {
            printf("Number out of range\n");
            return 1;
        }
    }

    qsort(arr, N, sizeof(int), compare);

    // Find maximum difference
    int max_diff = INT_MIN;
    
    // Temporary array to store pairs with max difference
    int max_diff_pairs[10500][2];
    int pair_count = 0;

    // Calculate differences between adjacent sorted elements
    for (int i = 1; i < N; i++) {
        int current_diff = arr[i] - arr[i-1];

        // If current difference is larger, reset pairs
        if (current_diff > max_diff) {
            max_diff = current_diff;
            pair_count = 0;
            max_diff_pairs[pair_count][0] = arr[i-1];
            max_diff_pairs[pair_count][1] = arr[i];
            pair_count++;
        }
        // If current difference matches max difference, add pair
        else if (current_diff == max_diff) {
            max_diff_pairs[pair_count][0] = arr[i-1];
            max_diff_pairs[pair_count][1] = arr[i];
            pair_count++;
        }
    }

    // Print pairs with maximum difference
    for (int i = 0; i < pair_count; i++) {
        printf("%d %d ", max_diff_pairs[i][0], max_diff_pairs[i][1]);
    }
    printf("\n");

    return 0;
}