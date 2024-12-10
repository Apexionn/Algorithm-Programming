#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  
    int opinion;
    int isHard = 0; 
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &opinion);
        if (opinion == 1) {
            isHard = 1; 
        }
    }
    
    if (isHard) {
        printf("not easy\n");
    } else {
        printf("easy\n");
    }

    return 0;
}
