#include <iostream.h>
#include <conio.h>
void main()
{
int a;
clrscr();
cout<<"RUNNERS-UP OF CRICKET WORLD CUPS "<<endl;
cout<<"1975"<<endl;
cout<<"1979"<<endl;
cout<<"1983"<<endl;
cout<<"1987"<<endl;
cout<<"1992"<<endl;
cout<<"1996"<<endl;
cout<<"1999"<<endl;
cout<<"2003"<<endl;
cout<<"2007"<<endl;
cout<<"Type the year and find the runners-up of the world cup:"<<endl;
cin>>a;
switch(a)
{
case 1975:cout<<"AUSTRALIA";break;
case 1979:cout<<"ENGLAND";break;
case 1983:cout<<"WEST INDIES";break;
case 1987:cout<<"ENGLAND";break;
case 1992:cout<<"ENGLAND";break;
case 1996:cout<<"AUSTRALIA";break;
case 1999:cout<<"PAKISTAN";break;
case 2003:cout<<"INDIA";break;
case 2007:cout<<"ODI - SRI LANKA"<<endl;
          cout<<"T20 - PAKISTAN";break;
default:cout<<"TYPE ONLY THE ABOVE YEARS";break;
}
getch();
}
