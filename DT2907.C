// wap to count the frequency of each element of an array;

#include<stdio.h>
#include<conio.h>
void main()
{
int f[3],freq[3];
int i,j,count;
clrscr();
printf("enter elements in array : ");

for(i=0;i<3;i++)
{
 scanf("%d",&f[i]);
 freq[i]= -1;
}
for(i=0;i<3;i++)
{
count=1;
for(j=i+1;j<3;j++)
{
if(f[i]==f[j])
{
count++;
freq[j]=0;
}
}
if(freq[i]!=0)
{
freq[i]=count;
}
}
printf("Frequency of all the elements are :\n");
for(i=0;i<3;i++)
{
if(freq[i]!=0)
printf("Frequency 0f [%d] = %d\n",f[i],freq[i]);
}

getch();
}