// wap to display the first n terms of fibonacci series;

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a=-1,b=1,c;
clrscr();
printf("enter the input number of terms: ");
scanf("%d",&n);
printf("here is the fibonacci series upto 10 terms :\n");
for(i=1;i<=n;i++)
{
c=a+b;
printf("\t%d",c);
a=b;
b=c;
}

getch();
}