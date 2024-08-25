#include <stdio.h>

float numSquare(float a){
    return a * a;   // squaring the numbers
}

float areaOfReactangle(float width, float height){
    return width * height;  // calculating the area of reactangle
}

float areaOfSquare(float length){
    return numSquare(length);   // calculating the area of square
}

float areaOfCircle(float radius){
    const float pi = 3.14159;   // constent value of Pi
    return pi * (numSquare(radius)); // calculating the area of Cirlce
}

void main(){
    float raWidth = 10.9;
    float raHeight = 10.0;
    printf("Area of Reactangle is %f\n", areaOfReactangle(raWidth, raHeight));

    float sqaureLength = 89.88;
    printf("Area of Square is %f\n", areaOfSquare(sqaureLength));

    float radius = 88.99;
    printf("Area of Circle is %f\n", areaOfCircle(radius));
}

