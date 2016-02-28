#include <iostream.h>
#include <conio.h>
void main()
{
int a;
clrscr();
cout<<"CAPTAINS OF CRICKET WORLD CUP WINNING TEAMS"<<endl;
cout<<"1975"<<endl;
cout<<"1979"<<endl;
cout<<"1983"<<endl;
cout<<"1987"<<endl;
cout<<"1992"<<endl;
cout<<"1996"<<endl;
cout<<"1999"<<endl;
cout<<"2003"<<endl;
cout<<"2007"<<endl;
cout<<"Type the year and find the captain of the winning team:"<<endl;
cin>>a;
switch(a)
{
case 1975:cout<<"WEST INDIES - CLIVE LLOYD";break;
case 1979:cout<<"WEST INDIES - CLIVE LLOYD";break;
case 1983:cout<<"INDIA - KAPIL DEV";break;
case 1987:cout<<"AUSTRALIA - ALLAN BORDER";break;
case 1992:cout<<"PAKISTAN - IMRAN KHAN";break;
case 1996:cout<<"SRI LANKA - ARJUNA RANATUNGA";break;
case 1999:cout<<"AUSTRALIA - STEPHEN WAUGH";break;
case 2003:cout<<"AUSTRALIA - RICKY PONTING";break;
case 2007:cout<<"ODI - AUSTRALIA - RICKY PONTING"<<endl;
          cout<<"T20 - INDIA - MAHENDRA SINGH DHONI";break;
default:cout<<"TYPE ONLY THE ABOVE YEARS";break;
}
getch();
}
