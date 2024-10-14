#include <stdio.h>

int main() {
    int N, M;
    
    // Read the number of Bibi's weapons and the number of dragon's attacks
    scanf("%d %d", &N, &M);
    
    int weapon[N], dragon[M];
    
    // Read the power of Bibi's weapons
    for (int i = 0; i < N; i++) {
        scanf("%d", &weapon[i]);
    }
    
    // Read the power of the dragon's attacks
    for (int i = 0; i < M; i++) {
        scanf("%d", &dragon[i]);
    }
    
    // Find the strongest weapon
    int maxWeaponPower = weapon[0];
    for (int i = 1; i < N; i++) {
        if (weapon[i] > maxWeaponPower) {
            maxWeaponPower = weapon[i];
        }
    }
    
    // Check if Bibi's strongest weapon can defeat all dragon's attacks
    for (int i = 0; i < M; i++) {
        if (dragon[i] >= maxWeaponPower) {
            // If any dragon's attack power is greater than or equal to the strongest weapon
            printf("Secret debunked\n");
            return 0;
        }
    }
    
    // If all dragon's attacks are weaker than Bibi's strongest weapon
    printf("The dark secret was true\n");
    
    return 0;
}
