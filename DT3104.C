// wap to find the missing number from the given array;

#include<stdio.h>
#include<conio.h>
void main()
{
int n=8,sum1=0,x;
int i,sum2=0;
int arr[8]={1,3,4,2,5,6,9,8};
clrscr();
printf("the given array is : ");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}

x = n+1;

sum1= (x*(x+1))/2;
printf("sum1= %d",sum1);

for(i=0;i<n;i++)
{
sum2=sum2+arr[i];
}

printf("\nsum2 =%d",sum2);
printf("\nMissing number = %d",sum1-sum2);

 getch();
}