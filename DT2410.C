// write a C program to make such a pattern like right angle triangle with number increased by 1;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n=0;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
n++;
printf("%d\t",n);
}
printf("\n");

}
getch();
}