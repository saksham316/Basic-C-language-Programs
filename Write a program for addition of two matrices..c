// Q32. Write a program for addition of two matrices.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l;
    int mat1[20][20],mat2[20][20];

    printf("Enter the number of rows that you want in your matrix 1\n");
    scanf("%d",&i);
    printf("Enter the number of columns that you want in your matrix 1\n");
    scanf("%d",&j);
    printf("Enter the number of rows that you want in your matrix 2\n");
    scanf("%d",&k);
    printf("Enter the number of rows that you want in your matrix 2\n");
    scanf("%d",&l);
    for(int row = 0;row<i;row++)
    {
        for(int column = 0;column<j;column++)
        {
            printf("Enter the element of row %d and column %d of FIRST MATRIX:\n",row+1,column+1);
            scanf("%d",&mat1[row][column]);
        }
    }
    for(int row = 0;row<k;row++)
    {
        for(int column = 0;column<l;column++)
        {
            printf("Enter the element of row %d and column %d of SECOND MATRIX:\n",row+1,column+1);
            scanf("%d",&mat2[row][column]);
        }
    }
    printf("The first matrix is :\n");
    for(int row = 0;row<i;row++)
    {
        for(int column = 0;column<j;column++)
        {
            printf("%d\t",mat1[row][column]);
        }
        printf("\n");
    }
    printf("The second matrix is :\n");
    for(int row = 0;row<k;row++)
    {
        for(int column = 0;column<l;column++)
        {
            printf("%d\t",mat2[row][column]);
        }
        printf("\n");
    }
    printf("The sum of the matrix 1 and matrix 2 is :\n");
    for(int row = 0;row<i;row++)
    {
        for(int column = 0;column<j;column++)
        {
            printf("%d\t",mat1[row][column]+mat2[row][column]);
        }
        printf("\n");
    }
 
getch();
    
}