// Q36. Write a Program to read two Strings & Concatenate the Strings
#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[20],str2[20],str3[20];
    int i=0,j=0;
    printf("Enter your first string:\n");
    scanf("%s",str1);
    printf("Enter your second string:\n");
    scanf("%s",str2);
    printf("The first string is %s\n",str1);
    printf("The second string is %s\n",str2);
    while(str1[i]!= '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
    printf("%c\n",str3[j]);
    i = 0;
    while(str2[i]!='\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("Concatenated string is %s",str3);
    getch();
}