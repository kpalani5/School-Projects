#include <iostream.h>
#include <conio.h>
void main()
{
int a;
clrscr();
cout<<"VENUES OF CRICKET WORLD CUPS "<<endl;
cout<<"1975"<<endl;
cout<<"1979"<<endl;
cout<<"1983"<<endl;
cout<<"1987"<<endl;
cout<<"1992"<<endl;
cout<<"1996"<<endl;
cout<<"1999"<<endl;
cout<<"2003"<<endl;
cout<<"2007"<<endl;
cout<<"2011"<<endl;
cout<<"2015"<<endl;
cout<<"2019"<<endl;
cout<<"Type the year and find the venues of the world cup:"<<endl;
cin>>a;
switch(a)
{
case 1975:cout<<"ENGLAND";break;
case 1979:cout<<"ENGLAND";break;
case 1983:cout<<"ENGLAND";break;
case 1987:cout<<"INDIA AND PAKISTAN";break;
case 1992:cout<<"AUSTRALIA";break;
case 1996:cout<<"INDIA, PAKISTAN AND SRI LANKA";break;
case 1999:cout<<"ENGLAND";break;
case 2003:cout<<"SOUTH AFRICA";break;
case 2007:cout<<"ODI - WEST INDIES"<<endl;
		  cout<<"T20 - SOUTH AFRICA";break;
case 2011:cout<<"INDIA, PAKISTAN, BANGLADESH AND SRI LANKA";break;
case 2015:cout<<"AUSTRALIA AND NEW ZEALAND";break;
case 2019:cout<<"ENGLAND";break;
default:cout<<"TYPE ONLY THE ABOVE YEARS";break;
}
getch();
}
