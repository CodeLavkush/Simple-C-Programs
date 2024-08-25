#include <stdio.h>

void main(){
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);

    if(a >= 'a' && a <= 'z'){
        printf("It is a Lower Case Character.");
    }
    else{
        printf("It is not a Lower Case Character.");
    }
}