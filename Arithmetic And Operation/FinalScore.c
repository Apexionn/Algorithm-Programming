#include <stdio.h>

int main(){
    int assignment, midexam, finalexam;
    scanf ("%d %d %d", &assignment, &midexam, &finalexam);
    
    double finalscore = 0.2 * assignment + 0.3 * midexam + 0.5 * finalexam;

    printf("%.2lf\n", finalscore);
    return 0;
}