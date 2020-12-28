// wap to accept a grade AND DECLARE THE equivalent description.

#include<stdio.h>
#include<conio.h>
void main()
{
char grade;
clrscr();
printf("enter the grade : ");
scanf("%c",&grade);
switch(grade)
{
case 'E': printf("Excellent");
	  break;
case 'V': printf("Very Good");
	  break;
case 'G': printf("Good");
	  break;
case 'A': printf("Average");
	  break;
case 'F': printf("Fail");
	  break;
default : printf("no matched found");
	  break;
}
getch();
}