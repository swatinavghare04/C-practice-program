// wap to move all zeros to the end of a given array;

#include<stdio.h>
#include<conio.h>
void main()
{
int i,count=0;
int arr[10]={2,5,7,0,4,0,7,-5,8,0};
clrscr();
printf("The given array is : \n");
for(i=0;i<10;i++)
{
printf("%d\t",arr[i]);
}
for(i=0;i<10;i++)
{
if(arr[i]>0)
{
arr[count++]=arr[i];
}
}
while(count<10)
{
arr[count++]=0;
}
printf("the new array after moving zeros at end is :\n");
for(i=0;i<10;i++)
{
printf("%d\t",arr[i]);
}
getch();
}