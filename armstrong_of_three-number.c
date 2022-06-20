#include<stdio.h>
#include<conio.h>
//153
int arm(int ar)
{
    int armstrong = 0;
    int remainder;
    while(ar!=0)
    {
    remainder = ar%10;
    armstrong += (remainder*remainder*remainder);
    ar = ar/10;
    }
    return armstrong;
    
}
void main()
{
    int n,a;
    printf("Enter the 3 digit number to check whether it is a armstrong number or not:\n");
    scanf("%d",&n);
    a = arm(n);
    if(a==n)
    printf("It is an armstrong number");
    else
    printf("It is not an armstrong number");
    getch();
}