#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long totalBase, totalBonus, totalDamage;

    totalBase = n * 100;
    totalBonus = n * (n - 1) / 2 * 50;

    totalDamage = totalBase + totalBonus;
    printf("%lld\n", totalDamage);

    return 0;
}
 