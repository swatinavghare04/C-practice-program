// wap to accept two integers and check whether they are equal or not;

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the first numbers : ");
scanf("%d",&a);
printf("enter the second number : ");
scanf("%d",&b);
if(a>b)
{
printf("a is greater");
}
else
{
printf("b is greater");
}
getch();
}