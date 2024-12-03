#include <stdio.h>
#include <string.h>

void convert(char from, char to, char str[]){
    int len = strlen(str);

    for (int i = 0; i < len; i++){
        if (str[i] == from){
            str[i] = to;
        }
    }  
}

void countChar(const char str[], int counter[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        counter[str[i] - 'A']++;
    }
}

void printChar(int counter[]){
    for (int i = 0; i < 26; i++){
        if (counter[i] > 0){
            printf("%c %d\n", (char)i+'A', counter[i]);
        }
    }
}

int main(){

    FILE *fp = fopen("testdata.in","r");
    
    if (!fp){
        return 0;
    }
    else{
        int tc;
        fscanf(fp,"%d\n",&tc);

        for (int i = 0; i < tc; i++){
            char str[123];
            fscanf(fp,"%[^\n]\n",str);
            
            int conv;
            fscanf(fp,"%d\n",&conv);

            int counter[26] = {0};
            int converted[26] = {0};
            char from,to;

            for(int j = 0; j < conv; j++){
                fscanf(fp,"%c %c\n",&from,&to);
                if(converted[from - 'A'] == 1){
                    continue;
                }
                
                convert(from, to, str); 
                converted[from - 'A'] = 1;
            }

            countChar(str, counter);
            printChar(counter);
        }
    }

    fclose(fp);

    return 0;
}