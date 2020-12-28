// wap to check whether an alphabet is a vowel or consonant;

#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter a aplhabet : ");
scanf("%c",&ch);
switch(ch)
{
case 'a','e','i','o','u':
printf("it is a vowel");
break;
default : printf("it is a consonant");
break;
}
 getch();
}