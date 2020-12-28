// wap to print on screen the output of adding,substracting,multiplying and dividing of tw numbers which will be entered by the user.

#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,add,sub,mul,div;
clrscr();
printf("enter two numbers :");
scanf("%d%d",&a,&b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("Addition =%d,\nSubstraction=%d,\nMultiplication=%d,\nDivision =%d",add,sub,mul,div);
getch();

}