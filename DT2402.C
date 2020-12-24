// write a C program to find the sum of first 10 natural number;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,sum=0;
clrscr();
printf("enter the 10 numbers from the keyboard :");
for(i=1;i<=10;i++)
{
scanf("%d\n",&num);
sum=sum+i;
}
printf("sum of10 numbers is :%d",sum);
getch();
}