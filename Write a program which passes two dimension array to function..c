// Q25. Write a program which passes two dimension array to function.
#include<stdio.h>
#include<conio.h>
void pass(int m,int n,int a[m][n])
{
    for(int i =0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("Enter the element of %d row and %d column in the array:\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i =0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("The element of %d row and %d column in the array is %d\n",i+1,j+1,a[i][j]);
        }
    }
}
void main()
{
    int array[3][3];
    pass(3,3,array);
    getch();
    
}