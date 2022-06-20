// Q38. Write a Program to Accepts two Strings & Compare them.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int lenstr1,lenstr2;
    char str1[20],str2[20];
    printf("Enter the first string:\n");
    gets(str1);
    printf("Enter the second string:\n");
    gets(str2);
    lenstr1 = strlen(str1);
    lenstr2 = strlen(str2);
    if(lenstr1>lenstr2)
        printf("%s is the greater string than %s",str1,str2);
    else if(lenstr1<lenstr2)
        printf("%s is the greater string than %s",str2,str1);
    else
        printf("Both the strings are equal");
    
    getch();

}