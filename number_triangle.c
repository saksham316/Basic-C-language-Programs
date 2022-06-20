#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,n;
    printf("Enter the number of rows you want in your triangle\n");
    scanf("%d",&n);
    for(row = 0;row<n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    getch();
}