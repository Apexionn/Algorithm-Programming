#include <stdio.h>

int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);

    double disc = ((a - b) / a) * 100;
    printf("%.2lf%%\n", disc);
    return 0;
}