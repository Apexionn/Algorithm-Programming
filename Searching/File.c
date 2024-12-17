#include <stdio.h>
#include <string.h>

typedef struct Kamus kamus;

struct Kamus{
    char singkat[64];
    char panjang[128];
};

int main(){
    int n,tc;

    FILE *fp = fopen("testdata.in","r");
    fscanf(fp,"%d\n",&n);
    
    kamus list[n];
    for (int i = 0; i < n; i++){
        fscanf(fp,"%[^#]#%[^\n]\n", list[i].singkat, list[i].panjang);
    }

    fscanf(fp,"%d\n",&tc);

    for (int i = 0; i < tc; i++){
        char str[128];
        char *token;
        char result[128][256];

        fscanf(fp,"%[^\n]\n",str);

        token = strtok(str, " ");

        int a = 0;
        while (token){   
            int found = 0;

            for (int j = 0; j < n; j++){
                if (strcmp(token, list[j].singkat) == 0){
                    strcpy(result[a], list[j].panjang);
                    found = 1;
                    break;
                }
            }

            if (!found){
                strcpy(result[a], token);
            }
            
            a++;
            token = strtok(NULL, " ");            
        }

        printf("Case #%d:\n", i+1);
        for (int j = 0; j < a; j++){
            printf("%s", result[j]);
            if(j == a - 1){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
    }
    fclose(fp);

    return 0;
}