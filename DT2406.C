// write a C program to display the n term of odd natural number and their sum;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,odsum=0;
clrscr();
printf("enter the number : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0);
else
{
printf("%d\n",i);
odsum=odsum+i;
}
}
printf("\nsum of odd n natural number is %d",odsum);
getch();
}