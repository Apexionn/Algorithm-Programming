#include <stdio.h>
#include <string.h>

int main() {
    char word1[21], word2[21], word3[21];

    scanf("%20s %20s %20s", word1, word2, word3);

    printf("%s %s %s\n", word3, word2, word1);

    return 0;
}
