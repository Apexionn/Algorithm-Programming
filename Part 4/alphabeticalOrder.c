#include <stdio.h>
#include <string.h>

int main() {
    char x1, x2, x3;
    
    // Input the three characters
    scanf(" %c %c %c", &x1, &x2, &x3);
    
    // Store the characters and their original positions
    char blocks[3] = {x1, x2, x3};
    int positions[3] = {1, 2, 3};
    
    // Sorting algorithm (Bubble Sort)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (blocks[j] > blocks[j + 1]) {
                // Swap the characters
                char tempChar = blocks[j];
                blocks[j] = blocks[j + 1];
                blocks[j + 1] = tempChar;
                
                // Swap the positions
                int tempPos = positions[j];
                positions[j] = positions[j + 1];
                positions[j + 1] = tempPos;
            }
        }
    }
    
    // Output the original positions in sorted order
    printf("%d %d %d\n", positions[0], positions[1], positions[2]);

    return 0;
}
