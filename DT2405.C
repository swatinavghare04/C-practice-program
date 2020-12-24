// write a C program to display the multiplication table of a given integer;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,t;
clrscr();
printf("enter the given integer\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
  t=n*i;
  printf("%d*%d=%d\n",n,i,t);
}
getch();
}