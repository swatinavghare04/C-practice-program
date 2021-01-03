// wap to find whether a given year is leap year or not;

#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("enter the year : ");
scanf("%d",&year);
if(year%4==0)
{
printf("given year is a leap year");
}
else
{
printf("given year is not a leap year");
}
getch();
}
