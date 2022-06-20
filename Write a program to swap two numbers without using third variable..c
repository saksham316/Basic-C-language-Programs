// Q15. Write a program to swap two numbers without using third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the numbers to swap");
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Numbers before swapping.\n");
    printf("a = %d\nb = %d\n",a,b);
    
    printf("..............Swapping the numbers.............Avadakedavra.......\n");
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a = %d\nb = %d",a,b);
    getch();
    
}