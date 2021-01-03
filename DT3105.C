// wap to find the smallest missing elemrnt from a sorted array;

#include<stdio.h>
#include<conio.h>
void main()
{
int arr[8]={0,1,3,4,5,6,7,9,};
int i,count,flag=0;
clrscr();
count=sizeof(arr)/sizeof(arr[0]);
printf("\nsize of array is : %d",count);
printf("\nThe given array is :\n");
for(i=0;i<count;i++)
{
printf("%d  ",arr[i]);
}
for(i=0;i<count;i++)
{
if(arr[i]!=i)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\nSmallest missing element is : %d",i);
}
 getch();
}