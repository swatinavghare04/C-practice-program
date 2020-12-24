// write a C program to display the pattern like right angle triangle with a number;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("%d\t",j);
}
printf("\n");
}
getch();
}