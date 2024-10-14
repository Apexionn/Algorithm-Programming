#include <stdio.h>

int main(){
    int assignment, mid, final;
    float finalscore;
    scanf("%d", &assignment);
    scanf("%d", &mid);
    scanf("%d", &final);

    finalscore = 0.2 * assignment + 0.3 * mid + 0.5 * final;
    printf("%.2f\n", finalscore);

}