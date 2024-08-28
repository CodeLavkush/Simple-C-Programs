#include <stdio.h>

float getAverage(float a, float b, float c);

void main(){
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    float average = getAverage(a, b, c);

    printf("Average of %.2f %.2f %.2f is %.2f", a, b, c, average);
}

float getAverage(float a, float b, float c){
    return (a + b + c) / 3;
}