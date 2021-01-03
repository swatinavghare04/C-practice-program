// wap to compute the sum of the digits of an integer.

#include<stdio.h>
#include<conio.h>
void main()
{
int num,n,t,sum=0;
clrscr();
printf("enter a number : ");
scanf("%d",&num);
t=num;
while(num>0)
{
n=num%10;
sum=sum+n;
num=num/10;
 }
printf("sum of %d=%d",t,sum);
getch();
}