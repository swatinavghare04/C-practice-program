// wap to check whether a given number is a armstrang number or not;

#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum=0,temp;
clrscr();
printf("enter any number : ");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=(sum +(r*r*r));
n=n/10;
}
if(temp==sum)
{
printf("Armstrong number");
}
else
{
printf("Not a armstong number");
}
getch();
}

