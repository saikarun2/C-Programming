#include<stdio.h>
int main()
{
    int price, dis;
    printf("ente the price value: ");
    scanf("%d",&price);
    if(price<1000){
        dis = (5 * price)/100;
    }
    else if(price>=1000 && price<=5000){
        dis = (10 * price)/100;
    }
    else{
        dis = (15 * price)/100;
    }
    printf("the final price after the discount= %d",price-dis);
    return 0;
}