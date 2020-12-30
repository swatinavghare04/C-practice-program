
// wap for 2d array of  size 3X3 and print matrix;

#include<stdio.h>
#include<conio.h>
void main()
{
int m[3][3],row,col;
clrscr();
for(row=0;row<3;row++)
{
   for(col=0;col<3;col++)
   {
     printf("enter the elements:\n");
     scanf("%d",&m[row][col]);
   }

}
for(row=0;row<3;row++)
{
    for(col=0;col<3;col++)
	{
      printf("%d\t",m[row][col]);
     }
    printf("\n");
}

getch();
}