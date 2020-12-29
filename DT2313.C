// wap to read any month number in integer and display the number of days for this month;

#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter any month number : ");
scanf("%d",&n);
switch(n)
{
case 1: printf("Number of days in first month = 31");
	  break;
case 2: printf("Number of days in second month = 28");
	  break;
case 3: printf("Number of days in third month = 31");
	  break;
case 4: printf("Number of days in forth month = 30");
	  break;
case 5: printf("Number of days in fifth month = 31");
	  break;
case 6: printf("Number of days in sixth month = 30");
	  break;
case 7: printf("Number of days in seventh month = 31");
	  break;
case 8: printf("Number of days in eight month = 31");
	  break;
case 9: printf("Number of days in nineth month = 30");
	  break;
case 10: printf("Number of days in tenth month = 31");
	  break;
case 11: printf("Number of days in eleventh month = 30");
	 break;
case 12: printf("Number of days in twelveth month = 31");
	 break;
default : printf("Null");
	  break;
}
getch();
}