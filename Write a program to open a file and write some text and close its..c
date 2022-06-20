// Q42. Write a program to open a file and write some text and close its.
#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *ptr;
    FILE *str;
    int num;
    ptr = fopen("saksham.txt","r");
    fscanf(ptr,"%d\n",&num);
    printf("%d",num);
    fclose(ptr);
    ptr = fopen("saksham.txt","w");
    fprintf(ptr,"saksham is a good boy");
    fclose(ptr);
    printf("\n");
    
    ptr = fopen("saksham.txt","r");
    char c;
    while(c!=EOF)
    {
        c = fgetc(ptr);
        printf("%c",c);
    }
    str = fopen("mary.txt","w");
    putc('y',str);
    fclose(str);
    remove("Harry.txt");

    getch();

    
}