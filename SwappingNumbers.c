#include <stdio.h>

void main(){
    int a = 4, b = 6;

    printf("Initial value %d and %d.", a, b);

    // using XOR operator for swapping the value of int
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nSwap value %d and %d.", a, b);
}