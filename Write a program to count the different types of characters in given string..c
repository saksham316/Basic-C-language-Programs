// Q30. Write a program to count the different types of characters in given string.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char a[20];
    int dec = 0,alph = 0,cha = 0;
    printf("Enter the characters to check what all different characters you have in this string:\n");
    scanf("%s",a);
    for(int i = 0;i<strlen(a);i++)
    {
        if(a[i]>=48&&a[i]<=57)
        {
            dec++;
        }
        else if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
        {
            alph++;
        }
        else    
            cha++;
    }
    printf("Your string have %d numbers\n",dec);
    printf("Your string have %d alphabets\n",alph);
    printf("Your string have %d characters\n ",cha);
    getch();
}
