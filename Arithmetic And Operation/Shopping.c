#include <stdio.h>

int main(){
    int N;
    double P;
    for (int i = 0; i < 4; i++){
        scanf("%d %lf", &N, &P);
        double total = P / (1 - (N / 100.0));
        printf("$%.2lf\n", total);
    }
    

    return 0;
}