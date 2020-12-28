// wap that takes an age(for example 20) as input and prints something as "you look older than 20".;

#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("enter the age : ");
scanf("%d",&age);
if(age>=1 && age<=19)
{
printf("\nyou look so beautiful");
}
else if(age>=20 && age<=30)
{
printf("\nyou look older than 20");
}
else if(age>=21 && age<=50)
{
printf("you look older than 50");
}
else
{
printf("you look oldest");
}
 getch();
}