#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int a;
cout<<"TENNIS GRAND SLAMS 2004 - 2008"<<endl;
cout<<"YEARS AVAILABLE:"<<endl;
cout<<"2004"<<endl;
cout<<"2005"<<endl;
cout<<"2006"<<endl;
cout<<"2007"<<endl;
cout<<"2008"<<endl;
cout<<"Enter any one of these years:";
cin>>a;
switch(a)
{
case 2004:cout<<"AUSTRALIAN OPEN = ROGER FEDERER (SUI)"<<endl;
		  cout<<"WIMBLEDON = ROGER FEDERER (SUI)"<<endl;
		  cout<<"FRENCH OPEN = GASTON GAUDIO (FRA)"<<endl;
		  cout<<"US OPEN = ROGER FEDERER (SUI)"<<endl;break;
case 2005:cout<<"AUSTRALIAN OPEN = MARAT SAFIN (RUS)"<<endl;
		  cout<<"WIMBLEDON = ROGER FEDERER (SUI)"<<endl;
		  cout<<"FRENCH OPEN = RAFAEL NADAL (ESP)"<<endl;
		  cout<<"US OPEN = ROGER FEDERER (SUI)"<<endl;break;
case 2006:cout<<"AUSTRALIAN OPEN = ROGER FEDERER (SUI)"<<endl;
		  cout<<"WIMBLEDON = ROGER FEDERER (SUI)"<<endl;
		  cout<<"FRENCH OPEN = RAFAEL NADAL (ESP)"<<endl;
		  cout<<"US OPEN = ROGER FEDERER (SUI)"<<endl;break;
case 2007:cout<<"AUSTRALIAN OPEN = ROGER FEDERER (SUI)"<<endl;
		  cout<<"WIMBLEDON = ROGER FEDERER (SUI)"<<endl;
		  cout<<"FRENCH OPEN = RAFAEL NADAL (ESP)"<<endl;
		  cout<<"US OPEN = ROGER FEDERER (SUI)"<<endl;break;
case 2008:cout<<"AUSTRALIAN OPEN = NOVAK DJOKOVIC (SER)"<<endl;
		  cout<<"WIMBLEDON = RAFAEL NADAL (ESP)"<<endl;
		  cout<<"FRENCH OPEN = RAFAEL NADAL (ESP)"<<endl;
		  cout<<"US OPEN = ROGER FEDERER (SUI)"<<endl;break;
default:cout<<"Enter years only from 2004 to 2008";		  
}
getch();
}
