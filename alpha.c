#include<stdio.h>
int main()
{
    char var;
    printf("enter the alphabet:");
    scanf("%c",&var);
    if((var>=65 && var<=90)) {
        printf("this is an uppercase alphabet");
    } else if((var>=97&&var<=122)) {
        printf("this an lower case variables");
    } else {
        printf("invalid alphabet or integer");
    }
    return 0;
}