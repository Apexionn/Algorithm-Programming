#include <stdio.h>

int main(){
    float A;

    for (int i = 0; i < 3; i++){
        scanf("%d", &A);
        float reaumur = 0.8 * A;
        float fahrenheit = (9/5 * A) + 32;
        float kelvin = A + 273;
        printf("%.2f %.2f %.2f\n", reaumur, fahrenheit, kelvin);
    }
    
    return 0;
}