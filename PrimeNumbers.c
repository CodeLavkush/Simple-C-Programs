#include <stdio.h>

void main(){
    int number = 12;
    int isPrime = 1;


    // used for loop...
    // if(number <= 1){
    //     isPrime = 0;
    // }
    // else{
    //     for (int i = 2; i * i <= number; i++)
    //     {
    //         if(number % i == 0){
    //             isPrime = 0;
    //             break;
    //         }
    //     }
    // }


    // used while loop...
    int i = 2;
    if(number <= 1){
        isPrime = 0;
    }
    else{
        while (i <= number)
        {
            if(number % i == 0){
                isPrime = 0;
                break;
            }
            i++;
        }
    }
    

    if(isPrime == 1){
        printf("Given %d is a Prime Number!\n", number);
    }
    else{
        printf("Given %d is not a Prime Number!\n", number);
    }
}