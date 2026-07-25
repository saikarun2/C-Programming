#include<stdio.h>

int main()
{
    int a,b,opt;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    printf("enter the operation to perform:\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod: ");
    scanf("%d",&opt);
    if(opt==1){
        printf("The sum of a+b =%d",a+b);
    }
    else if(opt==2){
        printf("The sub of a-b =%d",a-b);
    }
    else if(opt==3){
        printf("The Mul of a*b =%d",a*b);
    }
    else if(opt==4){
        printf("The Div of a/b =%d",a/b);
    }
    else if(opt==5){
        printf("The mod of a%b =%d",a%b);
    }
    else{
        printf("Eneter the correct option");
    }
    return 0;
}