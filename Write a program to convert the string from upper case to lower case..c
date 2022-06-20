// Q27. Write a program to convert the string from upper case to lower case.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char upper[20];char lower[20];
    printf("Enter the string and it will convert the Upper Case Charaters to Lower Case\n");
    gets(upper);
    printf("Entered string is %s\n",upper);
    for(int i=0;i<strlen(upper);i++)
    {
        if(upper[i]>=97 && upper[i]<=122)
        {
            lower[i] = upper[i] -32; 
        }
        else
        {
            lower[i] = upper[i];
        }
    }
    printf("The converted string from upper to lower is %s",lower);
    getch();
}
// SAme can be done for the lower to upper conversion