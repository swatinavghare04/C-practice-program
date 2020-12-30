//wap to count a total number of duplicate elements in an array;

#include<stdio.h>
#include<conio.h>
void main()
{
int f[3],i,j;
clrscr();
printf("enter Values :\n");
for(i=0;i<3;i++)
{
scanf("%d",&f[i]);
}
printf("elements in the array are :\n");
for(i=0;i<3;i++)
{
printf("%d\n",f[i]);
}
printf("Total  number of duplicare elements found in the array :\n");
for(i=0;i<3;i++)
{
for(j=i+1;j<3;j++)
{
if(f[i]==f[j])
printf("%d\n",f[j]);
}
}

getch();
}