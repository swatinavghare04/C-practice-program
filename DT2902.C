//wap to read n number of values in an array and display it in reverse order;

#include<stdio.h>
#include<conio.h>
void main()
{
int n[3],i;
clrscr();
printf("Values store into the arrau are : ");
for(i=0;i<3;i++)
{
scanf("%d",&n[i]);
}
printf("Values store into the array are :\n");
for(i=2;i>=0;i--)
{
printf("%d\t",n[i]);
}
getch();
}