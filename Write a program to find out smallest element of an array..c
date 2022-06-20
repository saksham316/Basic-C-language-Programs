// Q23. Write a program to find out smallest element of an array.
#include<stdio.h>
#include<conio.h>
void main()
{
    int array[5];
    
    printf("Enter 5 elements in this array:\n");
    for(int i=0;i<5;i++)
    {
        printf("Enter the %d element in this array:\n",i+1);
        scanf("%d",&array[i]);
    }
    int min = array[0];    
    for(int i =1;i<5;i++)
    {
        if(array[i]<min)
        {
            min = array[i];
        }
    }
    printf("%d is the smallest element in the array",min);
    getch();
}