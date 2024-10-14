#include <stdio.h>

int main() {
    int N, amount, total = 0;
    
    // Read the number of times Bibi borrowed money
    scanf("%d", &N);
    
    // Loop through N amounts Bibi borrowed
    for (int i = 0; i < N; i++) {
        scanf("%d", &amount);  // Read the amount of the i-th borrowing
        total += amount;  // Add it to the total amount
    }
    
    // Print the total amount Bibi owes
    printf("%d\n", total);
    
    return 0;
}
