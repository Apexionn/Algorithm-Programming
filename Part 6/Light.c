#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++){
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);
        
        int pattern[N][M];
        for (int j = 0; j < N; j++){
            for (int k = 0; k < M; k++){
                scanf("%d", &pattern[j][k]);
            }
        }

        int rooms[M];
        for (int j = 0; j < M; j++){
            rooms[j] = 0;
        }
        
        for (int j = 0; j < Q; j++){
            int friend;
            scanf("%d", &friend);
            friend--;

            for (int k = 0; k < M; k++){
                if (pattern[friend][k] == 1){
                    rooms[k] = 1 - rooms[k];
                }
            }
        }

        printf("Case #%d:\n", i);
        for (int j = 0; j < M; j++) {
            if (rooms[j] == 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    

    return 0;
}