// write a C program to read 10 numbers from the keyboard and find their sun and average;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,sum=0;
float avg;
clrscr();
printf("enter the 10 numbers from the keyboard\n:");

for(i=0;i<=10;i++)
{
scanf("%d\n",&num);
sum=sum+i;
}
printf("sum of10 numbers is :%d",sum);
avg=sum/10;
printf("Average of 10  numbers is = %f",avg);
getch();
}