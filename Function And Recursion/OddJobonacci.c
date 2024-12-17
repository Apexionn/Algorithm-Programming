#include <stdio.h>

int jobonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else if (n % 2 != 0) { // Jika n adalah bilangan ganjil
        return 1;
    } else { // Jika n adalah bilangan genap
        return jobonacci(n - 1) + jobonacci(n - 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0 || n > 25) {
        printf("Nilai N harus berada di antara 1 dan 25\n");
        return 1;
    }

    printf("%d\n", jobonacci(n));

    return 0;
}