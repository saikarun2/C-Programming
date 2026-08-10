#include<stdio.h>
void fact(int n){
    int ans=1;;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    printf("%d",ans);
}
int main()
{
    fact(5);
    return 0;
}