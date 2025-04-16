#include<stdio.h>
int main()
{
    int rows,columns;
    printf("enter the value of rows:");
    scanf("%d",&rows);
    printf("enter the value of columns:");
    scanf("%d",&columns);
    for(int i=1;i<= rows;i++)
    {
        for(int j=1;j<=columns;j++)  //it will be executed if it fails it will go to forloop1
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}