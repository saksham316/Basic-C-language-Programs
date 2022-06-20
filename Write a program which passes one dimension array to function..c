// Q24. Write a program which passes one dimension array to function.
#include<stdio.h>
#include<conio.h>
void pass(int n,int a[n]){
    for(int i =0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void main()
{
    int a[5] = {1,2,3,4,5};
    int n = 5;
    pass(n,a);
    getch();
}