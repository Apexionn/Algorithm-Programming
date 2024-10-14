// #include <stdio.h>

// int main(){
//     // int x = 3, y = 6;
//     // for(int i = 0; i<x; i++){
//     //     x--;
//     //     y++;
//     // }
//     // printf("%d\n", y);

// int i =0;
// for(int j=0; j<10 ; j++){
// for(int k=10; k>0; k--){
// if(j%2==0 && k%2==0){
// i++;

// }
// }
// }
// printf("%d", i);

//     return 0;
// }

#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 6; i += i % 4 + 2) {
        printf("%d\n", i);
    }
    return 0;
}
