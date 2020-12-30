// wap to sort elements of array in ascending order;

#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],i,j,temp;
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

for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(arr[j]<arr[i])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("sorted elemnts in ascending order are :\n");
for(i=0;i<5;i++)
{
printf("%d\t",arr[i]);
}
getch();
}