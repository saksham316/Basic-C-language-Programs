// Q10. Write a program to reverse any number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,mod;
    
    printf("Enter the number which you want to reverse:\n");
    scanf("%d",&n);
    printf("The reversed number is :\n");
    while(n!=0)
    {
        mod = n%10;
        printf("%d",mod);
        n = n/10;
    }
    getch();

}