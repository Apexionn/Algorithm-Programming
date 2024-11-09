#include <stdio.h>

int main(){
    int start, count;
    scanf("%d %d", &start, &count);

    for (int i = 0; i < count + 1; i++)
    {
        printf("%d\n", start + i);
    }
    
    return 0;
}