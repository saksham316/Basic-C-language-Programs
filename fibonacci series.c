//fibonacci series of the given range
// 0 1 1 2 3 5 8..................
#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 0;
    int b = 1;
    int c = a+b;
    int temp,n;
    printf("Enter the range of the fibonacci series:\n");
    scanf("%d",&n);
    printf("%d\t",a);
    printf("%d\t",b);
    for(int i = 0;i<n-2;i++)
    {
        printf("%d\t",c);
        temp = a;
        a = b;
        b = c;
        c = a+b;
    }    
    getch();
}