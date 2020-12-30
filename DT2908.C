// wap to find the maximum and minimum element in an array;

#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3],max,min,i;
clrscr();
printf("enter elements in array : ");

for(i=0;i<3;i++)
{
 scanf("%d",&arr[i]);
}

printf("elemnebts of an array are :\n ");
for(i=0;i<3;i++)
{
printf("[%d] = %d\n",i,arr[i]);
}
max=arr[0];
min=arr[0];

for(i=0;i<3;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}
}
printf("Maximum element is : %d\n",max);
printf("Minimum element is : %d\n",min);

getch();
}