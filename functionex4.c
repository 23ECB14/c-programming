/*parameter with return type*/
#include<stdio.h>
int sum(int a,int b);  //function declaration
int main()
{
    int res=sum(10,20);   //function call
    printf("res=%d",res);
    return 0;
}
int sum(int a,int b) //function definition
{
    int res=a+b;
    return res;
}