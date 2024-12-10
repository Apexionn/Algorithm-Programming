#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char shortWord[50];
    char originalWord[50];
} Dictionary;

void translateSentence(char *sentence, Dictionary *dict, int dictSize) {
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        int found = 0;
        for (int i = 0; i < dictSize; i++) {
            if (strcmp(token, dict[i].shortWord) == 0) {
                printf("%s", dict[i].originalWord);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%s", token);
        }
        token = strtok(NULL, " ");
        if (token != NULL) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (!file) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    int T, TC;
    fscanf(file, "%d\n", &T);

    Dictionary dict[T];
    for (int i = 0; i < T; i++) {
        char line[100];
        fgets(line, 100, file);

        char *shortWord = strtok(line, "#");
        char *originalWord = strtok(NULL, "\n");

        strcpy(dict[i].shortWord, shortWord);
        strcpy(dict[i].originalWord, originalWord);
    }

    fscanf(file, "%d\n", &TC);

    for (int i = 1; i <= TC; i++) {
        char sentence[100];
        fgets(sentence, 100, file);

        // Remove newline character if present
        size_t len = strlen(sentence);
        if (sentence[len - 1] == '\n') {
            sentence[len - 1] = '\0';
        }

        printf("Case #%d: ", i);
        translateSentence(sentence, dict, T);
    }

    fclose(file);
    return 0;
}
