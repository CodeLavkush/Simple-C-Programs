#include <stdio.h>

void main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);


    // if(a % 97 == 0){
    //     printf("%d number is divisibe by 97", a);
    // }
    // else{
    //     printf("%d Number is not divisible by 97", a);
    // }

    float sum = a % 97;
    printf("%f", sum);
}