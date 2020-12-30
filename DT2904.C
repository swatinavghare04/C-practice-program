//wap to copy the elements of one array into another;

#include<stdio.h>
#include<conio.h>
void main()
{
int f[3],i,s[3];
clrscr();
printf("enter Values :\n");
for(i=0;i<3;i++)
{
scanf("%d",&f[i]);
}
printf("element store in the first array are :\n");

for(i=0;i<3;i++)
{
printf("%d\t",f[i]);
}
for(i=0;i<3;i++)
{
 s[i]=f[i];
}
printf("\nelement store in the second array are :\n");
 for(i=0;i<3;i++)
{
 printf("%d\t",s[i]);
}
getch();
}