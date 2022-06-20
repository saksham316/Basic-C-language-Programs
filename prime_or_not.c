// Q7 Write a program to check given number is prime number or not.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,prime = 0;
    printf("Enter the number to check whether it is a prime number or not:\n");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("It is not a prime number");
    }
    else
    {
        for(int i =2;i<n;i++)
        {
            if(n%i==0)
            {
                prime = 1;
            }
            break;
        }
        if(prime == 1)
        {
            printf("It is not a prime number");
        }
        else
        printf("It is a prime number");
    }
    

    
}