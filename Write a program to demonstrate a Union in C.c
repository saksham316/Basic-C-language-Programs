// Q41. Write a program to demonstrate a Union in C
#include<stdio.h>
#include<conio.h>
typedef union Student{
    char name[20];
    int number;
}stu;
void main()
{
    stu student;
    printf("Enter the name of the student\n");
    gets(student.name);
    printf("Enter the number of the student\n");
    // scanf("%d",&student.number);
    printf("%d",sizeof(student));
    printf("\n");
    printf("\n%s\n",student.name);
    printf("\n%d\n",student.number);
    printf("%d\t%d",&student.name,&student.number);
}