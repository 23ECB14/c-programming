//this is my first program
#include<stdio.h> //preprocessor directive
int main() //main function
{
    int var_a=200; //initialization
    // int var_b; declaration
    printf("enter the value of a:");
    scanf("%d",&var_a); //& must be added before the var name
    printf("the value of variable a is : %d",var_a);
    return 0;
}