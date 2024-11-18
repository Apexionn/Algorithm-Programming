#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N;
        scanf("%d", &N); 

        int A[N]; 
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int P, Q;
        scanf("%d %d", &P, &Q);

        P--; 
        Q--;

        int bibiValue = A[P];
        int liliValue = A[Q];

        char *winner;
        if (bibiValue > liliValue) {
            winner = "Bibi";
        } else if (bibiValue < liliValue) {
            winner = "Lili";
        } else {
            winner = "Draw";
        }

        // Print the result in the required format
        printf("Case #%d : %s\n", caseNum, winner);
    }

    return 0;
}
