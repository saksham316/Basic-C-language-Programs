// Q20. Write a program to print a series 1 + 11 +111+….  + n.
#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,n;
    printf("Enter the range to print the series:\n");
    scanf("%d",&n);
    for(row = 1;row<=n;row++)
    {
        for(col=0;col<row;col++)
        {
            printf("1");
        }
        if(row!=n)
        {
            printf("+");
        }
    }  
    getch();
}