// wap to read the age of a candidate and determinewhether it is eligible for casting his/her vote;

#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("enter the age of a candidate: ");
scanf("%d",&age);
if(age>=18)
{
printf("candidate is eligible for casting his/her vote");
}
else if(age<18)
{
printf("candidate is not eligible for casting his/her vote");
}
getch();
}
