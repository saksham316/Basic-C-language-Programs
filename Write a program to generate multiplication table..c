//4. Write a program to generate multiplication table.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the positive integer whose table you want to be printed:\n");
    scanf("%d",&n);
    for(int i = 0;i<10;i++)
    {
        printf("%d X %d = %d\n",n,i+1,n*(i+1));
    }
    getch();
}