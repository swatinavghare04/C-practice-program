
// wap for multiplication of two matrix;

#include<stdio.h>
#include<conio.h>
void main()
{
int m1[2][2];
int m2[2][2];
int mul[2][2],row,col;
clrscr();
printf("Input the elments of first matrix :\n");
for(row=0;row<2;row++)
{
   for(col=0;col<2;col++)
   {
     scanf("%d",&m1[row][col]);
   }

}
printf("Input the element of second matrix :\n");
for(row=0;row<2;row++)
{
   for(col=0;col<2;col++)
   {
     scanf("%d",&m2[row][col]);
   }

}
 printf("The first matrix is :\n");
for(row=0;row<2;row++)
{
    for(col=0;col<2;col++)
	{
      printf("%d\t",m1[row][col]);
     }
    printf("\n");
}
printf("The second matrix is :\n");
for(row=0;row<2;row++)
{
    for(col=0;col<2;col++)
	{
      printf("%d\t",m2[row][col]);
     }
    printf("\n");
}
for(row=0;row<2;row++)
{
for(col=0;col<2;col++)
{
mul[row][col] = m1[row][col] * m2[row][col];
}
}
printf("Multiplication of two matrix is :\n");
for(row=0;row<2;row++)
{
    for(col=0;col<2;col++)
	{
      printf("%d\t",mul[row][col]);
     }
    printf("\n");
}

getch();
}