#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,check,remainder,result = 0,digit = 0;
    printf("Enter the number to check whether it is a armstrong number or not:-\n");
    scanf("%d",&n);
    check = n;
    /* if we are using n number of digit then first we need to count the digits */
    while(check!=0)
    {
        check = check/10;
        digit++;
    }
    //Now we can use the power function to multiply the remainder and to find whether the given number is armstrong number or not
    check = n;
    while(check!=0)
    {
        remainder = check%10;
        result += pow(remainder,digit);
        check = check/10;
    }
    if(result==n)
    {
        printf("The inserted number is a armstrong number");
    }
    else
    printf("The inserted number is not a armstrong number");

    getch();
    
    

}