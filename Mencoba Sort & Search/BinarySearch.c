#include <stdio.h>

int BinarySearch(int array[], int size, int target){
    int left = 0, right = size - 1;

    while (left <= right){
        int mid = left + (right - left) / 2;

        if (array[mid] == target){
            return mid;
        }
        
        if (array[mid] > target){
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int main(){
    int size, target;
    printf("Masukkan Ukuran dari Array: ");
    scanf("%d", &size);

    int data[size];
    printf("Masukkan %d data yang terurut: ", size);
    
    for (int i = 0; i < size; i++){
        scanf("%d", &data[i]);
    }
    
    printf("Masukkan data yang ingin dicari: ");
    scanf("%d", &target);

    int result = BinarySearch(data, size, target);

    if (result != -1){
        printf("Data %d ditemukan pada index ke %d\n", target, result);
    } else{
        printf("Data %d tidak ditemukan di dala, array\n", target);
    }
    
    
}