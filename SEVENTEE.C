// wap to accept two integers and check whether number is positive or negative;

#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the first numbers : ");
scanf("%d",&a);
if(a>0)
{
printf("number is positive");
}
else
{
printf("number is negative");
}
getch();
}