#include<stdio.h>

int main()
{
    float temperatue,res;
    int opt;
    printf("enter the temperatue: ");
    scanf("%f",&temperatue);
    printf("In which format you have to convert:\n1.Celsius to Fahrebheit\n2.Fahrenheit to Celsius: ");
    scanf("%d",&opt);
    if(opt==1){
        res = temperatue *(9.0/5.0)+32;
        printf("The temperatue after conversion of Celsius to Fahrebheit =%.2f",res);
    }
    else if(opt ==2){
        res = (temperatue-32) *(5.0/9.0);
        printf("The temperatue after conversion of Fahrenheit to Celsius =%.2f",res);
    }
    else{
        printf("enter the correct value\n");
    }

    return 0;
}