#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,n;
    printf("Enter the number of rows you want in your pyramid\n");
    scanf("%d",&n);
    for(row = 0;row<n;row++)
    {
        for(col = 0;col<n-row-1;col++)
        {
            printf(" ");
        }
        for(col=0;col<=row;col++)
        {
            printf(" %c",'*');
        }
        printf("\n");
    }
    getch();
    

}