// Q29. Write a program to count the all consonants from given string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[20];int consonant = 0,vowel = 0;
    printf("Enter the string to check how many consonants and vowels it has:\n");
    scanf("%s",str);
    printf("Entered string is %s",str);
    for(int i =0;i<strlen(str);i++)
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
        {
            consonant++;
        }
        else{
            vowel++;
        }
    }
    printf("The number of consonants in the entered string is %d\n",consonant);
    printf("The number of vowels in entered string is %d",vowel);
    getch();
    
}