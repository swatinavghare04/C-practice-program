// wap to find the two repeating element of an array;

#include<stdio.h>
#include<conio.h>
void main()
{
int arr[]={2,7,4,7,8,3,4};
int i,j,arr_size;
clrscr();
arr_size=sizeof(arr)/sizeof(arr[0]);
printf("print the given array :\n");
for(i=0;i<arr_size;i++)
{
printf("%d\t",arr[i]);
}
for(i=0;i<arr_size;i++)
{
for(j=i+1;j<arr_size;j++)
{
if(arr[i]==arr[j])
printf("\n%d",arr[i]);
}
}
getch();
}