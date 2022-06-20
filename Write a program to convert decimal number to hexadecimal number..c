// Q26. Write a program to convert decimal number to hexadecimal number.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int decimal;
    char dec_to_hex[20];
    int temp;
    printf("Enter the Decimal Number which you want to convert to Hexadecimal Number:\n");
    scanf("%d",&decimal);
    printf("The decimal value is : \n%d\n",decimal);
    printf("The hexadecimal value is :\n");
    for(int i=0;decimal!=0;i++)
    {
        temp = decimal%16;
        if(temp<10)
        {
            dec_to_hex[i] = temp + 48;
        }
        else
        {
            dec_to_hex[i] = temp + 55;
        }
        decimal = decimal/16;
    }
    for(int i=strlen(dec_to_hex)-1;i>=0;i--)
    {
        printf("%c",dec_to_hex[i]);
    }
    getch();
}
