#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int tablePeople[N][N];
    int countTeam[N+1];

    for (int i = 1; i <= N; i++) {
        countTeam[i] = 0;
    }

    for (int j = 0; j < N; j++) {
        for (int k = 0; k < N; k++) {
            scanf("%d", &tablePeople[j][k]);
            if (tablePeople[j][k] != 0) {
                countTeam[tablePeople[j][k]]++; 
            }
        }
    }

    int incompleteTeams = 0;

    for (int i = 1; i <= N; i++) {
        if (countTeam[i] < N) {
            incompleteTeams++;
        }
    }

    printf("%d\n", incompleteTeams);

    return 0;
}
