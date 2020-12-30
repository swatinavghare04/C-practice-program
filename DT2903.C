//wap to find the sum of all elements of the array;

#include<stdio.h>
#include<conio.h>
void main()
{
int n[3],i,sum=0;
clrscr();

for(i=0;i<3;i++)
{
printf("enter Values :\n");
scanf("%d",&n[i]);
}
for(i=0;i<3;i++)
{
printf("[%d] = %d\n",i,n[i]);
sum=sum+n[i];
}
printf("Sum of all elements store in the array is : %d",sum);
getch();
}