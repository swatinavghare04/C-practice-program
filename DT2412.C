// write a program to calculate the factorial of a given number;

#include<stdio.h>
#include<conio.h>
void main()
{
int num,fact=1;
clrscr();
printf("enter the number :");
scanf("%d",&num);
while(num>0)
{
fact=fact*num;
num=num-1;
}
/*for(i=num;i>=1;i--)
{
fact=fact*i;
} */
printf("factorial is :%d",fact);
getch();
}