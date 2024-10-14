#include <stdio.h>

int main(){

    int tc;
    scanf("%d",&tc);
    for (int i = 0; i < tc; i++)
    {
        int range;
        scanf("%d",&range);
        int speed = 1, total = 0, count = 0;;
        while (total < range)
        {
            total += speed;
            speed++;
            count++;
        }
        printf("Case #%d: %d\n",i+1,count);
    }
    

    return 0;
}