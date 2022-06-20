// Q13.  Write a program to find the area of circle
#include<stdio.h>
#include<conio.h>
void main()
{
    const float pi = 3.14;
    float area;
    float radius;
    printf("Enter the radius of the circle to find the area of the circle:\n");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("The area of the circle of radius %2f is = %f",radius,area);
    getch();

}