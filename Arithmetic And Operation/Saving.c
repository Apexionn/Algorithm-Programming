#include <stdio.h>

int main(){
    double x, y;
    scanf("%lf %lf", &x, &y);
    for (int i = 0; i < 3; i++){
        x += x * (y / 100);
    }
    
    printf("%.2lf\n", x);
    return 0;
}