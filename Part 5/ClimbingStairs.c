#include <stdio.h>

int main() {
    int N;
    
    // Read the number of numbers Bibi said
    scanf("%d", &N);
    
    int steps[N];  // Array to store the sequence of numbers Bibi said
    for (int i = 0; i < N; i++) {
        scanf("%d", &steps[i]);
    }
    
    // Process the sequence to find the number of steps in each set
    int count = 1;  // Start counting steps
    for (int i = 1; i < N; i++) {
        if (steps[i] == 1) {
            // Print the previous set's count before resetting for the new set
            printf("%d ", count);
            count = 1;  // Reset the count for the new set of stairs
        } else {
            count++;  // Increment the step count for the current set
        }
    }
    
    // Print the last set's count
    printf("%d\n", count);
    
    return 0;
}
