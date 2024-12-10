#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(long long int *)a - *(long long int *)b);
}

int main() {
    int N;
    scanf("%d", &N);  
    
    long long int X[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &X[i]);  
    }

    long long int Y;
    scanf("%lld", &Y); 

    qsort(X, N, sizeof(long long int), compare);

    int completedMissions = 0;
    for (int i = 0; i < N; i++) {
        if (Y >= X[i]) {
            Y -= X[i]; 
            completedMissions++;
        } else {
            break; 
        }
    }

    printf("%d\n", completedMissions);  

    return 0;
}
