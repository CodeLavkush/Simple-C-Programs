#include <stdio.h>

void main(){
    float a, b, c, d;

    printf("Enter Values: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    if(a > b && a > c && a > d){
        printf("Greatest Number is: %.2f\n", a);
    }
    else if(b > a && b > c && b > d){
        printf("Greatest Number is: %.2f\n", b);
    }
    else if(c > a && c > b && c > d){
        printf("Greatest Number is: %.2f\n", c);
    }
    else if(d > a && d > b && d > c){
        printf("Greatest Number is: %.2f\n", d);
    }

    if(a < b && a < c && a < d){
        printf("Lesser Number is: %.2f\n", a);
    }
    else if(b < a && b < c && b < d){
        printf("Lesser Number is: %.2f\n", b);
    }
    else if(c < a && c < b && c < d){
        printf("Lesser Number is: %.2f\n", c);
    }
    else if(d < a && d < b && d < c){
        printf("Lesser Number is: %.2f\n", d);
    }
}