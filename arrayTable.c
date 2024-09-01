#include <stdio.h>

void main(){
    int num = 0;
    int i = 1;
    int table[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        table[i] = i * num;
        printf("%d x %d = %d", num, i, table[i]);
        printf("\n");
    }
}