// wap to take three numbers(x,y,z)as input and print the output of (x+y).z and x.y+y.z;

#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,c,d;
clrscr();
printf("take 3 inputs : ");
scanf("%d%d%d",&x,&y,&z);
c=(x+y)*z;
d=((x*y)+(y*z));
printf("value of c = %d\n",c);
printf("value of d = %d\n",d);
getch();
}