// write a C program to display the cube of the number upto given an integer;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,cube;
clrscr();
printf("enter the given integer\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
 cube=i*i*i;
 printf("cube of the number %d\tis\t%d\n ",i,cube);
}
getch();
}