#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);  

    int items[N];
    int typeCount[1001];  

    memset(typeCount, 0, sizeof(typeCount));

    for (int i = 0; i < N; i++) {
        scanf("%d", &items[i]);
        typeCount[items[i]]++;
    }

    int maxCount = 0;
    for (int i = 1; i <= 1000; i++) {
        if (typeCount[i] > maxCount) {
            maxCount = typeCount[i];
        }
    }

    printf("%d\n", maxCount);

    return 0;
}
