// write a C program to display the n term of even natural number and their sum;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,evsum=0;
clrscr();
printf("enter the number : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if((i%2)!=0);
else
{
printf("%d\n",i);
evsum=evsum+i;
}
}
printf("\nsum of even n natural number is %d",evsum);
getch();
}