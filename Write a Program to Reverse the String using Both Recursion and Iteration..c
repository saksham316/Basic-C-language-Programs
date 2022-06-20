// Q39. Write a Program to Reverse the String using Both Recursion and Iteration.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverse(char *str)
{
    if(*str!='\0')
    {
        reverse(str+1);
        printf("%c",*str);
    }
}    
void main()
{
    char str[20];
    int len;
    printf("Enter the string which you want to reverse:\n");
    gets(str);
    printf("Reverse of the string using recursion:\n");
    reverse(str);

    printf("\nReverse of the string using iteration:\n");
    for(int i=strlen(str) - 1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    getch();

    
}