// wap to seperate even and odd elements in an array;

#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3],i;
clrscr();
printf("enter elements in array : ");

for(i=0;i<5;i++)
{
 scanf("%d",&arr[i]);
}

printf("elemnebts of an array are :\n ");
for(i=0;i<5;i++)
{
printf("[%d] = %d\n",i,arr[i]);
}

printf("Even elements in an array are :\n");
for(i=0;i<5;i++)
{
if(arr[i]%2==0)
{
printf("%d\t",arr[i]);
}
}

printf("\nOdd elemnets in an array are :\n");
for(i=0;i<5;i++)
{
if(arr[i]%2!=0)
{
printf("%d\t",arr[i]);
}
}
getch();
}