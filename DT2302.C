// wap to find the largest of three number;

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;;
clrscr();
printf("enter the number : ");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf(" A is greater\n");
}
else  if(b>a && b>c)
{
 printf(" B is greater\n");
 }
else
{
printf("\nC is greater");
}
getch();
}