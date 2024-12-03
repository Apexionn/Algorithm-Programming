#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char city[1000];
    double temperature;
    char metric;
    double tempInCelsius;
} City;

int compare(const void *a, const void *b) {
    City *cityA = (City *)a;
    City *cityB = (City *)b;

    if (cityA->tempInCelsius < cityB->tempInCelsius) {
        return -1;
    } else if (cityA->tempInCelsius > cityB->tempInCelsius) {
        return 1;
    }
    
    return strcmp(cityA->city, cityB->city);
}

double convertToCelsius(double temperature, char metric) {
    if (metric == 'F') {
        return (temperature - 32) * 5.0 / 9.0;
    }
    return temperature;
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (!file) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    City cities[100];
    int count = 0;

    while (fscanf(file, "%[^#]#%lf#%c\n", cities[count].city, &cities[count].temperature, &cities[count].metric) != EOF) {
        cities[count].tempInCelsius = convertToCelsius(cities[count].temperature, cities[count].metric);
        count++;
    }
    fclose(file);

    qsort(cities, count, sizeof(City), compare);

    for (int i = 0; i < count; i++) {
        printf("%s is %.2f%c\n", cities[i].city, cities[i].temperature, cities[i].metric);
    }

    return 0;
}
