#include <stdio.h>

void main(){

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    printf("Reverse order\n");
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}