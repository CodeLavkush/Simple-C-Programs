#include <stdio.h>

float calculateSum(float n);

void main(){
    float number = 0;
    printf("Enter a number: ");
    scanf("%f", &number);

    printf("The sum of %.1fth is %.2f", number, calculateSum(number));
}

float calculateSum(float n){
    if(n <= 0){
        return 0;
    }
    else{
        return n + calculateSum(n - 1);
    }
}