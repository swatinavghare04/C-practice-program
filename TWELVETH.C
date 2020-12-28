// wap to convert from celsius degree to kelvin and fahrenheit;

#include<stdio.h>
#include<conio.h>
void main()
{
int cel,cel_kel,cel_fah;
clrscr();
printf("enter the value in degree celsius : ");
scanf("%d",&cel);
cel_kel=cel+273.15;
cel_fah=(cel*9/5)+32;
printf("\nvalue from celsius to kelvin = %d\n",cel_kel);
printf("\nvalue from celsius to fagrenheit = %d",cel_fah);
getch();
}