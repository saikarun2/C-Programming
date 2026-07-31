#include<stdio.h>
int main()
{
    int purchase, discount, finalamount;
    char member;
    printf("enter the purchase amount: ");
    scanf("%d",&purchase);
    printf("Do you have membership: ");
    scanf(" %c",&member);
    if(member =='Y' || member =='y'){
        if(purchase>=5000){
            discount =20;
        }
        else if(purchase>=1000){
            discount =10;
        }
        else{
            discount =5;
        }
    }
    else{
        if(purchase>=5000){
            discount =15;
        }
        else if(purchase>=1000){
            discount = 5;
        }
        else{
            discount = 0;
        }
    }
    finalamount = purchase -(purchase *discount)/100;
    printf("The final amount is %d",finalamount);
    return 0;
}