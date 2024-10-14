#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    
    scanf("%d", &N);

    int rooms[N];
    
    for (int i = 0; i < N; ++i) {
        scanf("%d", &rooms[i]);
    }
    
    qsort(rooms, N, sizeof(int), compare);
    
    int happy_guests = 1;
    for (int i = 1; i < N; ++i) {
        if (rooms[i] != rooms[i-1]) {
            happy_guests++;
        }
    }
    
    printf("%d\n", happy_guests);
    
    return 0;
}
