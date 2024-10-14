#include <stdio.h>

int main(){

    char name[50];    
    int day, month, year;
    int telp;

    printf("Username : \n");
    fgets(name, sizeof(name), stdin);

    printf("Tanggal Lahir (dd mm yyyy) : \n");
    scanf("%d %d %d", &day, &month, &year); 

    printf("No. Telp : \n");
    scanf("%d", &telp);

    printf("Your Username : %s", name);
    printf("Your Birth Date : %02d/%02d/%d\n", day, month, year); 
    printf("Your No. Telp : %d\n", telp); 

    return 0;
}
