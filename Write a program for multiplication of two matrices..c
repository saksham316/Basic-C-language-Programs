// Q34. Write a program for multiplication of two matrices.
#include<stdio.h>
#include<conio.h>
void main()
{
    printf("---------------------------------------------------------------------------------------------------------------------------\n");
    printf("NOTE!!-->  THAT FOR MULTIPLICATION OF TWO MATRICES THE COLUMN OF FIRST MATRIX SHOULD BE EQUAL TO THE ROW OF SECOND MATRIX\n");
    printf("---------------------------------------------------------------------------------------------------------------------------\n\n");
    int i,j,k,l,sum =0;
    int mat1[20][20],mat2[20][20],mul[20][20];
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
    printf("The MULTIPLICATION of the above matrix is :\n");
    for(int row = 0;row<i;row++)
    {
        for(int column = 0;column<l;column++)
        {
            for(int common = 0;common<k;common++)
            {
                sum+= mat1[row][common]*mat2[common][column];
            }
            mul[row][column] = sum;
            sum = 0;
        }
    
    }
    printf("The multiplication of the matrix is :\n");
    for(int row = 0;row<i;row++)
    {
        for(int column = 0;column<l;column++)
        {
            printf("%d\t",mul[row][column]);
        }
        printf("\n");
    }

    getch();

}