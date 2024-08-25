#include <stdio.h>

void main(){
    int number = 4;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number,i, i * number);
    }
}
