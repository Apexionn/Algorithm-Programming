#include <stdio.h>

int main() {
    int N, sum = 0;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        int animals;
        scanf("%d", &animals);
        sum += animals;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
