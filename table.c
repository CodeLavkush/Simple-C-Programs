#include <stdio.h>

void main(){
    int number = 10;

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number,i, i * number);
    }

    printf("\nReverse Order....\n");

    for (int i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", number,i, i * number);
    }
}
