/*no parameter with return type*/
#include<stdio.h>
int sum();  //function declaration
int main()
{
    int res=sum();   //function call
    printf("res=%d",res);
    return 0;
}
int sum() //function definition
{
    int num1,num2;
    printf("enter the num1:");
    scanf("%d",&num1);
    printf("enter the num2:");
    scanf("%d",&num2);
    int res=num1+num2;
    return res;
}
