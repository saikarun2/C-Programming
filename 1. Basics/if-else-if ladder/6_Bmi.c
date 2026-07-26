#include<stdio.h>
int main()
{
    float height,weight,bmi;
    printf("enter the heigh of the person(in meters): ");
    scanf("%f",&height);
    printf("enter the weight of the person(in kg): ");
    scanf("%f",&weight);
    bmi = weight/(height * height);
    printf("\nYour BMI = %.2f\n", bmi);
    if (bmi < 18.5){
        printf("Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 25){
        printf("Category: Normal weight\n");
    }
    else if (bmi >= 25 && bmi < 30){
        printf("Category: Overweight\n");
    }
    else{
        printf("Category: Obese\n");
    }
    return 0;
}