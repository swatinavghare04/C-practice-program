// wap to find the sum of rows an column of a matrix;

#include<stdio.h>
#include<conio.h>
void main()
{
int m1[2][2],sum1,sum2;
clrscr();
m1[0][0]=5;
m1[0][1]=6;
m1[1][0]=7;
m1[1][1]=8;
printf("The matrix is :\n");
printf("%d\t%d\n",m1[0][0],m1[0][1]);
printf("%d\t%d\n",m1[1][0],m1[1][1]);
sum1=m1[0][0] + m1[0][1];
//printf("sum of rows and column : %d",sum1);
sum2=m1[1][0] + m1[1][1];
//printf("sum of rows and column : %d",sum2);
printf("The sum of rows and column of a matrix is :\n");
printf("%d\t%d\t%d\n%d\t%d\t%d\n",m1[0][0],m1[0][1],sum1,m1[1][0],m1[1][1],sum2);
getch();


}