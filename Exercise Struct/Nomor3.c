#include <stdio.h>

struct AutoMobile{
    int year;
    char model[8];
    int engine_power;
    float weight;
};

int main(){
    struct AutoMobile DataAutoMobile[100];
    int loop;

    printf("Masukkan Jumlah Data Mobil Baru: ");
    scanf("%d", &loop);

    for (int i = 0; i < loop; i++){
        printf("\nData Mobil ke-%d:\n", i + 1);
        printf("Tahun: ");
        scanf("%d", &DataAutoMobile[i].year);
        printf("Model Mobil: ");
        scanf(" %[^\n]", DataAutoMobile[i].model);
        printf("Engine Power: ");
        scanf("%d", &DataAutoMobile[i].engine_power);
        printf("Berat Mobil: ");
        scanf("%f", &DataAutoMobile[i].weight);
    }

    printf("\nData Mobil Baru yang telah dimasukkan:\n");
    for (int i = 0; i < loop; i++){
        printf("\nData Mobil Baru ke-%d:\n", i + 1);
        printf("Tahun: %d\n", DataAutoMobile[i].year);
        printf("Model Mobil: %s\n", DataAutoMobile[i].model);
        printf("Engine Power: %d\n", DataAutoMobile[i].engine_power);
        printf("Berat Mobil: %.1f\n", DataAutoMobile[i].weight);
    }
    
    return 0;
}