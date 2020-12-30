
// wap to find the sum of left diagonals of a matrix;

#include<stdio.h>
#include<conio.h>
void main()
{
int am[2][2],sum=0;
clrscr();
am[0][0]=1;
am[0][1]=2;
am[1][0]=3;
am[1][1]=4;
printf("The matrix is :\n");
printf("%d\t%d\n",am[0][0],am[0][1]);
printf("%d\t%d\n",am[1][0],am[1][1]);
sum=am[0][0]+am[1][1];
printf("Addition of right diagonal matrix is : %d",sum);
getch();
}