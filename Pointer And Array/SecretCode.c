#include <stdio.h>
#include <string.h>

void reverseSegment(char *str, int l, int r) {
    // Fungsi untuk membalikkan segmen dari indeks l hingga r pada string
    while (l < r) {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
}

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int Q;
        char S[1001]; 
        scanf("%d %s", &Q, S);

        for (int i = 0; i < Q; i++) {
            int L, R;
            scanf("%d %d", &L, &R);
            reverseSegment(S, L - 1, R - 1);
        }

        printf("Case #%d: %s\n", t, S);
    }

    return 0;
}
