#include <stdio.h>

int main() {
    int N; 
    int answered = 0; 
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int tci, tsi, tvi;
        scanf("%d %d %d", &tci, &tsi, &tvi);

        if (tsi > tvi) {
            answered++;
        }
    }

    printf("%d\n", answered);

    return 0;
}
