// wap to read temprature in centigrade and display a suitable message;
  /* according to temprature state below
  temp<0 then freezing weather
  temp 0-10 then very cold weather
  temp 10-20 then cold weather
  temp 20-30 then normal in temp
  temp 30-40 then its hot
  temp>=40 then its very hot*/


#include<stdio.h>
#include<conio.h>
void main()
{
int temp;
clrscr();
printf("enter the temperature in centigrate : ");
scanf("%d",&temp);
if(temp<0)
{
printf("\nfreezing weather ");
}
else if(temp==0 && temp<10)
{
 printf("\n very cold weather ");
}
else if(temp==10 && temp<20)
{
printf("\ncold weather ");
}
else if(temp==20 && temp<30)
{
printf("\nnormal in temprature");
}
else if(temp==30 && temp<40)
{
printf("\nits hot ");
}
else if(temp>=40)
{
printf("\nits very hot");
}
else
{
printf("\nnot defined");
}
getch();
}

