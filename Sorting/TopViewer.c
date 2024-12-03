#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[1000];
    char artist[1000];
    int views;
} Video;

int compare(const void *a, const void *b) {
    Video *videoA = (Video *)a;
    Video *videoB = (Video *)b;

    if (videoB->views != videoA->views) {
        return videoB->views - videoA->views;
    }

    return strcmp(videoA->title, videoB->title);
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (!file) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    Video videos[100];
    int count = 0;

    while (fscanf(file, "%[^#]#%[^#]#%d\n", videos[count].title, videos[count].artist, &videos[count].views) != EOF) {
        count++;
    }
    fclose(file);

    qsort(videos, count, sizeof(Video), compare);

    for (int i = 0; i < count; i++) {
        printf("%s by %s - %d\n", videos[i].title, videos[i].artist, videos[i].views);
    }

    return 0;
}
