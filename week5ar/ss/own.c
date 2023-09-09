#include <stdio.h>

int selectionsort (int n,int arr[]){
    int i, j, min;
    for(i = 0; i < 4;i++) {
        min = i;
        for(j = i+ 1; j < 4; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        // swamp elements 
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
    }
}

int main() {
    int arr [4] = {2,3,1,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionsort(size,arr);
    int i;
    printf("After sorting: ");
    for(i = 0; i < size; i++){
        printf("%d",arr[i]);
    }
}