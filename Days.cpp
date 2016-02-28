#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int a;
cout<<"                                 DAYS CHART"<<endl;
cout<<"Type Numbers from 1-7 and find out the corresponding Day "<<endl;
cout<<"Type a number from 1-7: ";
cin>>a;
switch(a)
{
case 1:cout<<"MONDAY";break;
case 2:cout<<"TUESDAY";break;
case 3:cout<<"WEDNESDAY";break;
case 4:cout<<"THURSDAY";break;
case 5:cout<<"FRIDAY";break;
case 6:cout<<"SATURDAY";break;
case 7:cout<<"SUNDAY";break;
default:cout<<"Type numbers only from 1-7";break;
}
getch();
}
