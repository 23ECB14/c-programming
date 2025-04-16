#include<stdio.h>
int main()
{
    float c,f;
    printf("eter the celsius:");
    scanf("%f",&c);
    f= (c* 9/5) + 32;
    printf("the fahrenheit is:%f",f);
    return 0;
}