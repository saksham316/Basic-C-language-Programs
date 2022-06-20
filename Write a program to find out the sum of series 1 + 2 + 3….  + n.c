// Q19. Write a program to find out the sum of series 1 + 2 + 3….  + n
#include<stdio.h>
#include<conio.h>
int sum(int n){
    int a;
    if(n==0)
    return 0;
    else
    a = n + sum(n-1);

    return a;
}
void main()
{
    int n;
    printf("Enter the range to print the sum :\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d",i+1);
        if(i+1<n)
        printf("+");
    }
    sum(n);
    printf("\nThe sum of the input range is %d",sum(n));
    getch();
}