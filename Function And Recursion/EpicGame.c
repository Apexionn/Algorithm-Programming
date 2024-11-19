#include <stdio.h>

void playGame(int caseNum, long long N) {
    int turn = 0; // 0 = Jojo, 1 = Lili

    while (N > 1) {
        if (N % 2 == 0) {
            N /= 2; 
        } else {
            N = N * 3 + 1; 
        }
        turn = 1 - turn; 
    }

    if (turn == 0) {
        printf("Case #%d: Lili\n", caseNum);
    } else {
        printf("Case #%d: Jojo\n", caseNum);
    }
}

int main() {
    int T;
    scanf("%d", &T); 

    for (int t = 1; t <= T; t++) {
        long long N;
        scanf("%lld", &N); 
        playGame(t, N);
    }

    return 0;
}
