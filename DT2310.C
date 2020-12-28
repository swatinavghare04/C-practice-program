// wap to accept a grade AND DECLARE THE equivalent description.

#include<stdio.h>
#include<conio.h>
void main()
{
int day_num;
clrscr();
printf("enter the day number : ");
scanf("%d",&day_num);
switch(day_num)
{
case '1': printf("Sunday");
	  break;
case '2': printf("Monday");
	  break;
case '3': printf("Tuesday");
	  break;
case '4': printf("Wednesday");
	  break;
case '5': printf("Thursday");
	  break;
case '6': printf("Friday");
	  break;
case '7': printf("Saturday");
	  break;
default : printf("no matched found");
	  break;
}
getch();




















}