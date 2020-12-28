// wap to calculate profit and loss on a transaction.;

#include<stdio.h>
#include<conio.h>
void main()
{
int cp,sp,profit,loss;
clrscr();
printf("enter a selling price : ");
scanf("%d",&sp);
printf("\nenter the cost price : ");
scanf("%d",&cp);
if(sp>cp)
{
profit = sp-cp;
printf("\n profit = %d",profit);
}
else if(cp>sp)
{
loss = cp-sp;
printf("\n loss = %d",loss);
}
else
{
printf("\nno profit and no loss");
}
 getch();
}