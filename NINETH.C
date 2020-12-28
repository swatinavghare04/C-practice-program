// wap that takes four numbers as input to calculate and print the average;

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
float avg;
clrscr();
printf("enter four numbers as a input :");
scanf("%d%d%d%d",&a,&b,&c,&d);
avg=(a+b+c+d)/4;
printf("average of four numbers is : %.2f",avg);
getch();
}
