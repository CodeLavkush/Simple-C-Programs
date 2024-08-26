#include <stdio.h>

void main(){
    int number = 12;
    int factorial = 1;

    // used for loop...
    // if(number == 0){
    //     printf("0! Factorial is 1\n");
    // }
    // else{
    //     for(int i = 1; i <= number; i++)
    //     {
    //         factorial *= i;
    //     }

    //     printf("factorial of %d is %d\n", number, factorial);
    // }

    // used while loop...
    int i = 1;
    if(number == 0){
        printf("0! Factorial is 1\n");
    }
    else{
       while (i <= number)
       {
            factorial *= i;
            i++;
       }
        printf("factorial of %d is %d\n", number, factorial);
    }

}