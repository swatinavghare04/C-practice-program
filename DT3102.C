// wap to accept two matrices and check whether they are equal;

#include<stdio.h>
#include<conio.h>
void main()
{
int m1[2][2],m2[2][2];
int row,col;
fflush(stdin);
clrscr();
printf("Enter the elements of first matrix :\n");
for(row=0;row<2;row++)
{
    for(col=0;col<2;col++)
     {
       scanf("%d",&m1[row][col]);
     }
}
printf("Enter the elements of second matrix :\n");
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
   for(row=0;row<1;row++)
{
    for(col=0;col<1;col++)
    {
     if(m1[row][col]==m2[row][col])
     printf("Matrix are equal");
     else
     printf("matrix are not equal");
     }
}
getch();

}