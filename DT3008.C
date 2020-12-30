
// wap to find the transpose of a given matrix;

#include<stdio.h>
#include<conio.h>
void main()
{
int m1[2][2];
int row,col;
clrscr();
printf("Input the elments of matrix :\n");
for(row=0;row<2;row++)
{
   for(col=0;col<2;col++)
   {
     scanf("%d",&m1[row][col]);
   }

}
printf("The matrix is :\n");
for(row=0;row<2;row++)
{
    for(col=0;col<2;col++)
	{
      printf("%d\t",m1[row][col]);
     }
    printf("\n");
}
printf("The transpose of a matrix is :\n");
for(row=0;row<2;row++)
{
    for(col=0;col<2;col++)
	{
      printf("%d\t",m1[col][row]);
     }
    printf("\n");
}
getch();
}