#include <stdio.h>

void countPositiveNumbers(int arr[], int size){

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] > 0){
            count++;
        }
    }

    printf("%d\n", count);
}

void main(){
    int numbers[] = {1,3,6,7, 8,-1,-6,-8};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    countPositiveNumbers(numbers, size);
}