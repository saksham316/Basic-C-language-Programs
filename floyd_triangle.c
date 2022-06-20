#include<stdio.h>
#include<conio.h>
/* 1
   23
   456
   78910  */
void main()
{
    int row,col,n,r = 1;
    printf("Enter the rows which you want in your triangle\n");
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
        for(col=0;col<=row;col++)
        {
            printf("%d ",r);
            r++;
        }
        printf("\n");
    }
  getch();  
}