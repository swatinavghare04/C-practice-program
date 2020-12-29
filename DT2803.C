// wap to find the prime numbers within a range of nummbers;

#include<stdio.h>
#include<conio.h>
void main()
{
int start,end,i,j;
clrscr();
printf("enter the starting input : ");
scanf("%d",&start);
printf("enter the ending input : ");
scanf("%d",&end);
printf("the prime number between 1 to 50 are\n:");
for(i=start;i<=end;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
break;
 }
if(i==j)
{
printf("\t%d",j);
}
}
getch();
}