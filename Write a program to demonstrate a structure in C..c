// Q40. Write a program to demonstrate a structure in C.
#include<stdio.h>
#include<conio.h>
typedef struct employee{
    char name[20];
    int number;
    int id;
}emp;
void main()
{
    emp Employee[3];
    for(int i = 0;i<1;i++)
    {
    printf("Enter your name Employee %d\n",i+1);
    scanf("%s",Employee[i].name);
    printf("Enter your number Employee %d\n",i+1);
    scanf("%d",&Employee[i].number);
    printf("Enter your id Employee %d\n",i+1);
    scanf("%d",&Employee[i].id);
    }
     printf("NAME\t\tNUMBER\t\tID\n");

    for(int i=0;i<1;i++)
    {
        printf("%s\t\t%d\t\t%d\n",Employee[i].name,Employee[i].number,Employee[i].id);
    }
    printf("%d\t%d\t%d",&Employee[1].name,&Employee[1].number,&Employee[1].id);
}