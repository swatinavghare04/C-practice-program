// wapto check weather a character is a alphabate,digit or special symbol;

#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter a character : ");
scanf("%c",&ch);
if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
{
printf("\nenter character is a alphabate");
}
else if(ch>='0'&&ch<='9')
{
printf("\nenter character is a digit");
}
else
{
printf("\nenter character is a special symbol ");
}
 getch();
}