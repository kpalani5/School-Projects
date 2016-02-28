#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int a;
cout<<"                                 MONTH CHART"<<endl;
cout<<"Type Numbers from 1-12 and find out the corresponding Month "<<endl;
cout<<"Type a number from 1-12: ";
cin>>a;
switch(a)
{
case 1:cout<<"JANUARY";break;
case 2:cout<<"FEBRUARY";break;
case 3:cout<<"MARCH";break;
case 4:cout<<"APRIL";break;
case 5:cout<<"MAY";break;
case 6:cout<<"JUNE";break;
case 7:cout<<"JULY";break;
case 8:cout<<"AUGUST";break;
case 9:cout<<"SEPTEMBER";break;
case 10:cout<<"OCTOBER";break;
case 11:cout<<"NOVEMBER";break;
case 12:cout<<"DECEMBER";break;
default:cout<<"Type numbers only from 1-12";break;
}
getch();
}
