#include <stdio.h>
#include <string.h>

void algorithm(int shift, char sentence[]){
    int len = strlen(sentence);
    for (int i = 0; i < len; i++){
        switch (sentence[i]){
        case '0':
            sentence[i] = 'O';
            break;
        case '1':
            sentence[i] = 'I';
            break;
        case '3':
            sentence[i] = 'E';
            break;
        case '4':
            sentence[i] = 'A';
            break;
        case '5':
            sentence[i] = 'S';
            break;
        case '6':
            sentence[i] = 'G';
            break;
        case '7':
            sentence[i] = 'T';
            break;
        case '8':
            sentence[i] = 'B';
            break;
        }
    }

    for (int i = 0; i < len; i++){
        if (sentence[i] != ' ') {
            sentence[i] = (sentence[i] - 'A' - shift + 26) % 26 + 'A';
        }
        
    }
}

int main(){

    FILE *fp = fopen("testdata.in","r");
    if (!fp){
        return 0;
    }else{
        int tc;
        fscanf(fp, "%d\n",&tc);

        for (int i = 0; i < tc; i++){
            int shift;
            fscanf(fp, "%d\n", &shift);

            char sentence[1000];
            fscanf(fp, "%[^\n]\n", sentence);

            algorithm(shift, sentence);

            printf("Case #%d: %s\n",i+1,sentence);
        }
        
    }
    
    return 0;
}