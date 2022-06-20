// Q21. Write a program to print a series 1 + 12 +123+….  + n
#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,n;
    printf("Enter the range till which you want to print the given series:\n");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        if(row!=n)
        {
            printf("+");
        }
    }
    getch();
}