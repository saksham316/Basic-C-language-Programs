// Q31. Write a program to reverse a strin
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[20];
    printf("Enter the string to reverse it \n");
    scanf("%s",str);
    printf("The reversed string is :\n");
    for(int i = strlen(str)-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    getch();
}
