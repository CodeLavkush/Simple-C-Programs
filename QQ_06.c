#include <stdio.h>
#define ARRAY_SIZE 5
void main(){
    int marks[ARRAY_SIZE] = {};

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("\nEnter your Marks: ");
        scanf("%d", &marks[i]);        
    }
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("marks of student %d is %d\n", i + 1, marks[i]);
    }
}