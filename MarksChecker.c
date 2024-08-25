#include <stdio.h>

void main(){

    float english, science, maths;
    float totalPercentage, totalMaths, totalEnglish, totalScience;

    printf("--Enter your marks--\n");
    printf("English: ");
    scanf("%f", &english);

    printf("Maths: ");
    scanf("%f", &maths);

    printf("Science: ");
    scanf("%f", &science);

    totalPercentage = ((english + science + maths) / 300) * 100;
    printf("%f", totalPercentage);


    totalMaths = (maths / 100) * 100;
    totalEnglish = (english / 100) * 100;
    totalScience = (science / 100) * 100;

    if(totalPercentage > 40){
        if(totalMaths > 30 && totalEnglish > 30 && totalScience > 30)
            printf("\nYou Passed!");
        else{
            printf("\nYou Failed!");
        }
    }
    else{
        printf("\nYou Failed!");
    }
}