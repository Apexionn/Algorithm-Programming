#include <stdio.h>

// Function to calculate the GCD of two integers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM of two integers
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  
}

// Function to calculate the number of multiples of x up to n
int countMultiples(int n, int x) {
    return n / x;
}

// Function to calculate the number of toys thrown away using inclusion-exclusion
int countToysThrownAway(int n, int a, int b, int c, int d) {
    int countA = countMultiples(n, a);
    int countB = countMultiples(n, b);
    int countC = countMultiples(n, c);
    int countD = countMultiples(n, d);

    // Count of multiples of A and B
    int countAB = countMultiples(n, lcm(a, b));
    // Count of multiples of A and C
    int countAC = countMultiples(n, lcm(a, c));
    // Count of multiples of A and D
    int countAD = countMultiples(n, lcm(a, d));
    // Count of multiples of B and C
    int countBC = countMultiples(n, lcm(b, c));
    // Count of multiples of B and D
    int countBD = countMultiples(n, lcm(b, d));
    // Count of multiples of C and D
    int countCD = countMultiples(n, lcm(c, d));

    // Count of multiples of A, B, and C
    int countABC = countMultiples(n, lcm(lcm(a, b), c));
    // Count of multiples of A, B, and D
    int countABD = countMultiples(n, lcm(lcm(a, b), d));
    // Count of multiples of A, C, and D
    int countACD = countMultiples(n, lcm(lcm(a, c), d));
    // Count of multiples of B, C, and D
    int countBCD = countMultiples(n, lcm(lcm(b, c), d));

    // Count of multiples of A, B, C, and D
    int countABCD = countMultiples(n, lcm(lcm(a, b), lcm(c, d)));

    // Applying inclusion-exclusion principle
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
