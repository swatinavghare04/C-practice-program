// write a C program to make such a pattern like a pyramid with an asterisk;

#include<stdio.h>
#include<conio.h>
void main()
{
int row,sp,symbl;
clrscr();
for(row=1;row<=3;row++)
{

for(sp=1;sp<=(3-row);sp++) //printing spaces

  printf(" ");
  for(symbl=1;symbl<=((2*row)-1);symbl++) // printing the symbol
  {
  printf("*");
  }

printf("\n");
}
getch();
}