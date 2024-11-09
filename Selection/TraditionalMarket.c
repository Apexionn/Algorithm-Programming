#include <stdio.h>

int main() {
    int d, s, t; 
    scanf("%d %d %d", &d, &s, &t);

    if (d >= t && t >= s) {
        printf("Daging\nTelur\nSayur\n");
    } else if (d >= s && s >= t) {
        printf("Daging\nSayur\nTelur\n");
    } else if (t >= d && d >= s) {
        printf("Telur\nDaging\nSayur\n");
    } else if (t >= s && s >= d) {
        printf("Telur\nSayur\nDaging\n");
    } else if (s >= d && d >= t) {
        printf("Sayur\nDaging\nTelur\n");
    } else if (s >= t && t >= d) {
        printf("Sayur\nTelur\nDaging\n");
    }

    return 0;
}
