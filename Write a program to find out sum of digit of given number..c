// Q11. Write a program to find out sum of digit of given number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,mod,result = 0;
    printf("Enter the number to find the sum of its digit:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        mod = n%10;
        result += mod;
        n = n/10;
    }
    printf("The sum of the digit is = %d",result);
    getch();
}