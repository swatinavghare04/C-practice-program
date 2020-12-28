// write a C program that takes a number as input and print its multiplication table;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,a;
clrscr();
printf("enter the number");
scanf("%d",&a);
printf("\nmultiplication table is : ");

for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",a,i,a*i);
}

getch();

}