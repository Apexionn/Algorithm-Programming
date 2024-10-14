#include <stdio.h>

void convertTime(int *hour){
    *hour = *hour - 1;
}

int main(){
    char courseCode[11];
    int startHour, startMinute, endHour, endMinute;

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d:%d-%d:%d", courseCode, &startHour, &startMinute, &endHour, &endMinute);

        convertTime(&startHour);
        convertTime(&endHour);

        printf("%s %02d:%02d-%02d:%02d\n", courseCode, startHour, startMinute, endHour, endMinute);
    }
    

    return 0;
}