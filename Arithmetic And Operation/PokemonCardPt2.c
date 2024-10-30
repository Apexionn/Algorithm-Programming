#include <stdio.h>

int main(){
    double x, y;
    scanf("%lf %lf", &x, &y);

    double result = x / y * 100;
    printf("%.2lf%%\n", result);
    return 0;
}