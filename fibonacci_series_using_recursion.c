//fibonacci series of the given range
// 0 1 1 2 3 5 8..................
#include<stdio.h>
#include<conio.h>
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
void main()
{
    int n,a;
    printf("Enter the range:\n");
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
    a = fib(i);
    printf("%d\t",a);
    }
}