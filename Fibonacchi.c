#include <stdio.h>

int calculateFibonacchi(int n);


void main(){
    int number;
    printf("Enter value of n: ");
    scanf("%d", &number);

    printf("\nThe value of %dth Fibonacchi is %d", number, calculateFibonacchi(number));
}

int calculateFibonacchi(int n){
    if(n <= 1){
        return n;
    }
    else{
        return calculateFibonacchi(n - 1) + calculateFibonacchi(n - 2);
    }
}