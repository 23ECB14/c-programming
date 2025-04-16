#include<stdio.h>
int main()
{
    int rows,columns;
    printf("enter the value of rows:");
    scanf("%d",&rows);
    printf("enter the value of columns:");
    scanf("%d",&columns);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)  //it will be executed if it fails it will go to forloop1
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}