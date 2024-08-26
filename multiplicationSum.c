#include <stdio.h>

void main(){
    int number = 8;
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += (i * number);
        printf("%d x %d = %d\n", number,i, i * number);
    }
    printf("Sum of table %d is %d", number, sum);
}