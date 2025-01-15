#include <stdio.h>
#include <string.h>

int main(){
    int loop,length,breathe;
    int i,j,l;
    int total, kiri, kanan;
    char hallway[10001];

    scanf("%d",&loop);
    getchar();
    for(i = 0; i < loop; i++){
        scanf("%d %d",&length,&breathe);
        getchar();

        scanf("%s",&hallway);
        getchar();

        kiri = -1;
        kanan = -1;
        total = 0;

        for(j = 0; j < length; j++){
            if(kiri == -1){
                if(hallway[j] == '1'){
                    kiri = j + 1;
                }
            }
            if(hallway[j] == '1'){
                total++;
            }
        }

        for(l = length - 1; l > length - breathe - 1; l-- ){
            if(kanan == -1){
                if(hallway[l] == '1'){
                    kanan = l + 1;
                }
            }
        }

        if(length <= breathe){
            printf("Case #%d: Alive\n",i + 1);
        }else if(total == 1){
            printf("Case #%d: Dead\n",i + 1);
        }else if(kiri <= breathe && kanan > length-breathe){
            printf("Case #%d: Alive\n",i + 1);
        }else{
            printf("Case #%d: Dead\n",i + 1);
        }


    }

    return 0;
}