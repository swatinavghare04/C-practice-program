// wap ot print the odd numbers from 1 to 99. print one number per line;

#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();

for(i=1;i<=99;i++)
{
if(i%2!=0)
{
printf("%d\n",i);
}
}
getch();
}