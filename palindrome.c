// Q9. Write a program to check given number is palindrome number or not.
#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20];
    int digit = 0,len;
    char *b;
    b = a;
    int palindrome =  1;
    printf("Enter the string to check whether it is a palindrome or not:\n");
    gets(a);
    while(*b!='\0')
    {
        digit++;
        b++;
    }
    printf("The number of string element is %d\n",digit);
    len = digit -1;
    for(int i =0;i<(len/2);i++)
    {
        if(a[i] != a[len - i])
        {
            palindrome = 0;
            break;
        }
    }
    if(palindrome)
    {
        printf("The input string is a palindrome\n");
    }
    else
    printf("The input string is not a palindrome\n");
    getch();
}