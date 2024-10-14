#include <stdio.h>

int checkPosition(int position) {
    switch(position) {
        // Ladders
        case 9: return 21;
        case 33: return 42;
        case 76: return 92;

        // Snakes
        case 53: return 37;
        case 80: return 59;
        case 97: return 88;

        // No ladders or snakes, return the same position
        default: return position;
    }
}

int main() {
    int n, position = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        position += arr[i];

        position = checkPosition(position);
    }

    printf("%d\n", position);

    return 0;
}
