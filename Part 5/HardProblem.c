#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N); 

        char S[N + 1]; 
        char K[N + 1];

        scanf("%s", S); 
        scanf("%s", K); 

        int correctAnswers = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == K[i]) {
                correctAnswers++;
            }
        }

        int grade = (correctAnswers * 100) / N;

        printf("Case #%d: %d\n", t, grade);
    }

    return 0;
}
