// wap to compute the sum of the first 500 prime number;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sum=0;
clrscr();
for(i=1;i<=500;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
{
break;
}
}
if(i==j)
{
//printf("%d\n",j);
sum = sum +i;
}
}
 printf("sum = %d",sum);
getch();
}