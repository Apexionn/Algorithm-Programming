#include <stdio.h>

int main() {
    int N, M;
    
    scanf("%d %d", &N, &M);
    
    int weapon[N], dragon[M];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &weapon[i]);
    }
    
    for (int i = 0; i < M; i++) {
        scanf("%d", &dragon[i]);
    }
    
    int maxWeaponPower = weapon[0];
    for (int i = 1; i < N; i++) {
        if (weapon[i] > maxWeaponPower) {
            maxWeaponPower = weapon[i];
        }
    }
    
    for (int i = 0; i < M; i++) {
        if (dragon[i] >= maxWeaponPower) {
            printf("Secret debunked\n");
            return 0;
        }
    }
    
    printf("The dark secret was true\n");
    
    return 0;
}
