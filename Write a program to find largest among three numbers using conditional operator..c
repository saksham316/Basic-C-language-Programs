// Q12. Write a program to find largest among three numbers using conditional operator.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("ENTER THREE NUMBERS TO CHECK WHICH ONE IS THE GREATEST AMONG THEM\n");
    printf("Enter the first number\t");
    scanf("%d",&a);
    printf("Enter the second number\t");
    scanf("%d",&b);
    printf("Enter the third number\t");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a = %d is the greatest of em all",a);
        }
        else
        printf("c = %d is the greatest of em all",c);
    }
    else
    {
        if(b>a)
        {
            if(b>c)
            {
                printf("b = %d is greatest of em all.",b);
            }
            else
                printf("c = %d is greatest of em all.",c);
        }
    }
    getch();
    
}