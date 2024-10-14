#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);

        char S[N+1];
        scanf("%s", S);

        int Bibi = 0, Lili = 0;

        for (int j = 0; j < N; j++)
        {
            if (S[j] == 'L')
            {
                Lili++;
            } else if (S[j] == 'B'){
                Bibi++;
            }
        }
        
        if (Bibi > Lili)
        {
            printf("Bibi\n");
        } else if (Lili > Bibi) {
            printf("Lili\n");
        } else if(Lili == Bibi || Bibi == Lili){
            printf("None\n");
        }
        
    }
    
    return 0;
}