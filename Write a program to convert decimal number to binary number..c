// Q16. Write a program to convert decimal number to binary number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[20],n;
    printf("Enter the number to convert it into binary number:\n");
    scanf("%d",&n);
    for(i = 0;n>0;i++)
    {
        a[i] = n%2;
        n = n/2;
    }
    
    printf("The binary value of the inserted number is :\n");
    for(i = i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    getch();
}
//octal is similar to binary only thing we need to change is that we have to mod and divide it by 8 and not 2;
