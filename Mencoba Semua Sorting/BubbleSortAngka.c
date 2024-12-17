#include <stdio.h>

void BubbleSortAngka(int B[], int A){
    for (int i = 0; i < A - 1; i++){
        for (int j = 0; j < A - i - 1; j++){
            if (B[j] > B[j + 1]){
                int temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }
}

int main(){
    int A;
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &A);

    int B[A];
    printf("Masukkan elemen array:\n");
    for (int i = 0; i < A; i++){
        scanf("%d", &B[i]);
    }
    
    BubbleSortAngka(B, A);

    printf("Array setelah diurutkan menggunakan Bubble Sort:\n");
    for (int i = 0; i < A; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}