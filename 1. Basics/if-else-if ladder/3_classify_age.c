#include<stdio.h>

int main()
{
    int age;
    printf("enter the age of the person: ");
    scanf("%d",&age);
    if(age<3){
        printf("Toddler\n");
    }
    else if(age>=3 && age<=12){
        printf("Child\n");
    }
    else if(age>=13 && age<=19){
        printf("Teenager\n");
    }
    else if(age>=20 && age<=59){
        printf("Adult\n");
    }
    else{
        printf("Senior\n");
    }
    return 0;
}