#include <stdio.h>

void main(){
    int marks = 79;

    if(marks >= 90 && marks <= 100){
        printf("Your Grade is A");
    }
    else if(marks >= 80 && marks < 90){
        printf("Your Grade is B");
    }
    else if(marks >= 70 && marks < 80){
        printf("Your Grade is C");
    }
    else if(marks >= 60 && marks < 70){
        printf("Your Grade is D");
    }
    else if(marks >= 50 && marks < 60){
        printf("Your Grade is E");
    }
    else{
        printf("Your Grade is F");
    }
}