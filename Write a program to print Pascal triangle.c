// Q18. Write a program to print Pascal triangle
#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,n,res; // here n is the number of columns input by the user and res is the result value after using the pascal triangle formula and printing it
    printf("Enter the number of rows in your triangle:\n");
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
        for(col = 0;col<n-row-1;col++)
        {
            printf(" ");
        }
        res = 1;
        for(col = 0;col<=row;col++)
        {
            printf(" %d",res);
            res = res*(row-col)/(col+1);
        }
        printf("\n");
    }
    getch();
}