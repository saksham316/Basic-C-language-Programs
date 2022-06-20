//factorial 
#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
void main()
{
    int n;
    printf("Enter the range:\n");
    scanf("%d",&n);
    fact(n);
    printf("The factorial of the %d is %d",n,fact(n));
    getch();
}