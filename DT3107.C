// wap to find majority element of an array;

#include<stdio.h>
#include<conio.h>
void main()
{
int n=9;
int arr[]={1,3,3,7,4,3,2,3,3};
int i,j,el,count=1;
clrscr();
printf("The element of an array is :\n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
el=arr[0];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(arr[i]!=arr[j])
count++;
}
el=arr[i];
}
printf("\nThe majority element of an array : %d",el);
getch();
}