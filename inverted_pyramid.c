#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,n;
    printf("Enter the number of rows you want in your pyramid\n");
    scanf("%d",&n);
    for(row = 0;row<n;row++)
    {
        for(col=0;col<=row-1;col++)
        {
            printf(" ");
        }
        for(col=n-row;col;col--)
        {
            printf(" %c",'*');
        }
        printf("\n");
    }
    getch();
}