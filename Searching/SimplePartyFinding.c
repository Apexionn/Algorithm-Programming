#include <stdio.h>
#include <stdlib.h>

void findParty(int N, int* mmr, int target, int* result) {
    result[0] = -1;
    result[1] = -1;
    
    int targetExists = 0;
    for (int i = 0; i < N; i++) {
        if (mmr[i] == target) {
            targetExists = 1;
            break;
        }
    }
    
    if (!targetExists) {
        return;  
    }

    int lowerMMR = -1, higherMMR = -1;
    int maxLowerMMR = -1;
    int minHigherMMR = 10000; 

    for (int i = 0; i < N; i++) {
        if (mmr[i] < target && mmr[i] > maxLowerMMR) {
            maxLowerMMR = mmr[i];
        }
        if (mmr[i] > target && mmr[i] < minHigherMMR) {
            minHigherMMR = mmr[i];
        }
    }

    if (minHigherMMR != 10000) {
        lowerMMR = target;
        higherMMR = minHigherMMR;
    } else {
        lowerMMR = maxLowerMMR;
        higherMMR = target;
    }

    result[0] = lowerMMR;
    result[1] = higherMMR;
}

int main() {
    int K; 
    scanf("%d", &K);

    for (int case_num = 1; case_num <= K; case_num++) {
        int N;
        scanf("%d", &N);

        int* mmr = (int*)malloc(N * sizeof(int));
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &mmr[i]);
        }

        int F;
        scanf("%d", &F);

        int result[2];
        findParty(N, mmr, F, result);

        printf("CASE #%d: %d %d\n", case_num, result[0], result[1]);

        free(mmr);
    }

    return 0;
}