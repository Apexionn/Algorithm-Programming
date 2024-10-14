#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    for (int t = 1; t <= T; t++) {
        int N; // Number of questions
        scanf("%d", &N); // Read the number of questions

        char S[N + 1]; // Lili's answers
        char K[N + 1]; // Answer key

        scanf("%s", S); // Read Lili's answers
        scanf("%s", K); // Read the answer key

        int correctAnswers = 0;

        // Calculate the number of correct answers
        for (int i = 0; i < N; i++) {
            if (S[i] == K[i]) {
                correctAnswers++;
            }
        }

        // Calculate the grade
        int grade = (correctAnswers * 100) / N;

        // Print the result in the required format
        printf("Case #%d: %d\n", t, grade);
    }

    return 0;
}
