// wap to determine whether a number is prime or not;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,num;
clrscr();
printf("enter any number : ");
scanf("%d",&num);
for(i=2;i<=num-1;i++)
{
if(num%i==0)
break;
 }
if(i==num)
printf("%d is a prime number",num);

else
 printf("%d is not prime number",num);

getch();
}