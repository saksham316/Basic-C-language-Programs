// Q14. Write a program to swap two numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("Enter the numbers to swap");
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Numbers before swapping.\n");
    printf("a = %d\nb = %d\n",a,b);
    
    printf("..............Swapping the numbers.............Avadakedavra.......\n");
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d",a,b);
    getch();

}