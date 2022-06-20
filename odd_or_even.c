// Q8. Write a program to check a number is odd or even.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a number to check whether it is a even or an odd number:\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid statement");
    }
    else if(n%2==0)
    {
        printf("It is an even number");
    }
    else
    printf("It is a odd number");
}