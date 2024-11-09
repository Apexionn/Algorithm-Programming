#include <stdio.h>

int main(){
    int N;
    int jojo, lili, bibi;

    scanf("%d", &N);

    scanf("%d %d %d", &jojo, &lili, &bibi);

    int overallscores[N];
    int allScore = jojo + lili + bibi;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &overallscores[i]);
        allScore += overallscores[i];
    } 
    
    int total_participants = N + 3;
    double average = (double) allScore / total_participants;
    
    // Check if Jojo passes
    if (jojo >= average) {
        printf("Jojo lolos\n");
    } else {
        printf("Jojo tidak lolos\n");
    }
    
    // Check if Lili passes
    if (lili >= average) {
        printf("Lili lolos\n");
    } else {
        printf("Lili tidak lolos\n");
    }
    
    // Check if Bibi passes
    if (bibi >= average) {
        printf("Bibi lolos\n");
    } else {
        printf("Bibi tidak lolos\n");
    }


    return 0;
}