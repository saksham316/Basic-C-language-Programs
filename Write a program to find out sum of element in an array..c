// Q35. Write a program to find out sum of element in an array.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum = 0;
    int a[n];
    printf("Enter the range of the array:\n");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        printf("Enter the %d element in your matrix:\n",i+1);
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++)
    {
        sum += a[i];
    }
    printf("The sum of all the elements present in the array is %d",sum);
    getch();

}