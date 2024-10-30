#include <stdio.h>

int main(){
    int PhyDamage, MDamage, PureDamage;
    scanf ("%d %d %d", &PhyDamage, &MDamage, &PureDamage);
    
    double totalDamage = 0.2 * PhyDamage + 0.3 * MDamage + 0.5 * PureDamage;

    printf("%.2lf\n", totalDamage);
    return 0;
}