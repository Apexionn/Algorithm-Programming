#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkMin(int total, int target){
    int front,back,min;
    if (total == target || target == 1){
        return 0;
    }
    else if (target % 2 == 0){ // Genap
        front = target / 2;
        back = (total - target) / 2;
        return (front > back) ? back : front;
    } else {               // Ganjil  
        front = (target-1) / 2;
        back = (total - target + 1) / 2;
        return (front > back) ? back : front;
    }
}

int main(){
    int tc,total,target;
    scanf("%d",&tc);

    for (int i = 0; i < tc; i++){
        scanf("%d %d",&total,&target);
        int min = checkMin(total,target);
        printf("Case #%d: %d\n",i+1,min);
    }
    

    return 0;
}