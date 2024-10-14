#include <stdio.h>

void convertTemperature(float celsius) {
    float reamur = celsius * 0.8;
    float fahrenheit = (celsius * 9/5) + 32;
    float kelvin = celsius + 273;
    printf("%.2f %.2f %.2f\n", reamur, fahrenheit, kelvin);
}

int main() {
    float input;
    
    for (int i = 0; i < 3; i++) {
        scanf("%f", &input);
        convertTemperature(input);
    }
    
    return 0;
}
