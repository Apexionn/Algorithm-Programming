#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  
}

int countMultiples(int n, int x) {
    return n / x;
}

int countToysThrownAway(int n, int a, int b, int c, int d) {
    int countA = countMultiples(n, a);
    int countB = countMultiples(n, b);
    int countC = countMultiples(n, c);
    int countD = countMultiples(n, d);

    int countAB = countMultiples(n, lcm(a, b));
    int countAC = countMultiples(n, lcm(a, c));
    int countAD = countMultiples(n, lcm(a, d));
    int countBC = countMultiples(n, lcm(b, c));
    int countBD = countMultiples(n, lcm(b, d));
    int countCD = countMultiples(n, lcm(c, d));

    int countABC = countMultiples(n, lcm(lcm(a, b), c));
    int countABD = countMultiples(n, lcm(lcm(a, b), d));
    int countACD = countMultiples(n, lcm(lcm(a, c), d));
    int countBCD = countMultiples(n, lcm(lcm(b, c), d));

    int countABCD = countMultiples(n, lcm(lcm(a, b), lcm(c, d)));

    return countA + countB + countC + countD 
        - countAB - countAC - countAD - countBC - countBD - countCD 
        + countABC + countABD + countACD + countBCD 
        - countABCD;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n, a, b, c, d;
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
        
        int result = countToysThrownAway(n, a, b, c, d);
        printf("Case #%d: %d\n", i, result);
    }

    return 0;
}
