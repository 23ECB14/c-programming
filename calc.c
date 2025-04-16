#include<stdio.h>
int main()
{
    int a,b,result,choice;
    printf("enter the values of a a and b:");
    scanf("%d %d",&a,&b);
    printf("enetr your choice: 1.add 2.sub 3.multi 4.div 5.modulo");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        result=a+b;
        printf("the addition of two number is %d",result);
        break;
        case 2:
        result=a-b;
        printf("the subtraction of two numbers is %d",result);
        break;
        case 3:
        result=a*b;
        printf("the multiplication of two numbers is %d",result);
        break;
        case 4:
        result=a/b;
        printf("the division of two numbers is %d",result);
        break;
        case 5:
        result=a%b;
        printf("the modulus of two numbers is %d",result);
        break;
        default:
        printf("enter a valid number");
    
    }
    return 0;
}