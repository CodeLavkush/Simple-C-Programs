#include <stdio.h>

float sumCube(float a){
    return a * a * a;   // cubing the given numbers.
}

float sumSquare(float a){
    return a * a;   // squaring the given numbers.
}

const float getPi(){
    return 3.14159; // returning the constent value of Pi.
}

float findVolOfCylinder(float radius, float height){
    return getPi() * sumSquare(radius) * height;    // calculating the volumn of cylinder.
}

float findVolOfSphere(float radius){
    return getPi() * sumCube(radius) * 4 / 3;   // calculating the volumn of square.
}

float findVolOfCube(float edge){
    return sumCube(edge);   // calculating the volumn of cube.
}

void main(){
    float cubeEdge = 10;
    printf("The Volumn of Cube is %f\n", findVolOfCube(cubeEdge));

    float sphereRadius = 10;
    printf("The Volumn of Sphere is %f\n", findVolOfSphere(sphereRadius));

    float cylinderRadius = 2;
    float cylinderHeight = 1;
    printf("The Volumn of Cylinder is %f\n", findVolOfCylinder(cylinderRadius, cylinderHeight));
}