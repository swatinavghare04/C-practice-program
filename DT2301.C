// wap to accept the heightof a person in centimeter and categorize the person according to their height.

#include<stdio.h>
#include<conio.h>
void  main()
{
int ht_cent;
clrscr();
printf("enter the height of the person in centimeter :");
scanf("%d",&ht_cent);
if(ht_cent<=100)
{
printf("person is small\n ");
}
else if(ht_cent>=100 && ht_cent<=150)
{
printf(" height of the person is in average range \n ");
}
else if(ht_cent>=150 && ht_cent<=200)
{
printf("person is tall\n ");
}
else if(ht_cent>=200 && ht_cent<=230)
{
 printf("person is taller\n ");
}
else
{
printf("\nperson is tallest ");
}
getch();
}