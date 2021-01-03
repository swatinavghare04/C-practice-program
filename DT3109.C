// wap to replace every element with the greatest element on its right side;

#include<stdio.h>
#include<conio.h>
void main()
{
int arr[]={7,5,8,9,6,8,5,7,4,6};
int i,n=10,ge;
clrscr();
printf("array is :\n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
ge=arr[n-1];
for(i=n-2;i>=0;i--)
{
if(ge>arr[i])
arr[i]=ge;
else
ge=arr[i];
}
printf("The new array is :\n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
getch();
}