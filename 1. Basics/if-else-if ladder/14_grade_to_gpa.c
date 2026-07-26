#include<stdio.h>

int main()
{
    char grade;
    printf("enter the grade(A/B/C/D/E/F): ");
    scanf("%c",&grade);
    if(grade =='A' || grade =='a'){
        printf("Your GPA is 10\n");
    }
    else if(grade == 'B' || grade =='b'){
        printf("Your GPA is 8\n");
    }
    else if(grade == 'C' || grade =='c'){
        printf("Your GPA is 6\n");
    }
    else if(grade == 'D' || grade =='d'){
        printf("Your GPA is 4\n");
    }
    else if(grade == 'F' || grade =='f'){
        printf("Your GPA is 0\n");
    }
    else{
        printf("Invalid Grade\n");
    }
    return 0;
}