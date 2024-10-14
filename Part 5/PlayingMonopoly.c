#include <stdio.h>

int main() {
    int N, position = 0, roll; 
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int roll;
        scanf("%d", &roll);
        position += roll; 
        
        // Check for special squares
        if (position == 30) {
            position = 10; // Go to Jail
        } else if (position == 12) {
            position = 28; // Move to 28
        } else if (position == 35) {
            position = 7; // Move to 7
        }

        // Ensure the position does not exceed 39 (the last square)
        if (position > 39) {
            position %= 40; // Wrap around if exceeding the board size
        }
    }

    printf("%d\n", position);
    return 0;
}
