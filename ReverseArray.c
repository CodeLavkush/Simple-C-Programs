#include <stdio.h>

void reverseArray(int arr[], int size){

    int reversedArr[size];
    
    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - i - 1];
    }

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", reversedArr[i]);
    }
}
void main(){
    int numberArr[] = {1,2,5,6,7,9};
    int size = sizeof(numberArr) / sizeof(numberArr[0]);

    reverseArray(numberArr, size);
}