#include <stdio.h>

int main(){
    int T;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++){
        int N;

        scanf("%d", &N);

        int scores[N];
        int max_score = 0;
        int gifts = 0;

        for (int j = 0; j < N; j++){
            scanf("%d", &scores[j]);
            if (scores[j] > max_score){
                max_score = scores[j];
                gifts = 1;
            } else if (scores[j] == max_score){
                gifts++;
            }
            
        }
        printf("Case #%d: %d\n", i, gifts);    
    }
    

    return 0;
}