// Q37. Write a Program to Find the Length of a String without using the Built-in Function
#include<stdio.h>
#include<conio.h>
void main()
{
    char s[20];
    int count = 0,i=0;
    printf("Enter the string:\n");
    gets(s);
    while(s[i]!= '\0')
    {
        i++;
        count++;
    }
    printf("The length of the string is %d",count);
    getch();

}