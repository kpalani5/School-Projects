#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int a;
cout<<"BARCLAYS PREMIER LEAGUE MANAGERS - JANUARY 2009"<<endl;
cout<<"Teams Available:"<<endl;
cout<<"ARSENAL FOOTBALL CLUB - 1"<<endl;
cout<<"ASTON VILLA FOOTBALL CLUB - 2"<<endl;
cout<<"BLACKBURN FOOTBALL CLUB - 3"<<endl;
cout<<"BOLTON WANDERERS FOOTBALL CLUB- 4"<<endl;
cout<<"CHELSEA FOOTBALL CLUB - 5"<<endl;
cout<<"EVERTON FOOTBALL CLUB - 6"<<endl;
cout<<"FULHAM FOOTBALL CLUB - 7"<<endl;
cout<<"HULL CITY FOOTBALL CLUB - 8"<<endl;
cout<<"LIVERPOOL FOOTBALL CLUB - 9"<<endl;
cout<<"MANCHESTER CITY FOOTBALL CLUB - 10"<<endl;
cout<<"MANCHESTER UNITED FOOTBALL CLUB - 11"<<endl;
cout<<"MIDDLESBROUGH FOOTBALL CLUB - 12"<<endl;
cout<<"NEWCASTLE FOOTBALL CLUB - 13"<<endl;
cout<<"PORTSMOUTH FOOTBALL CLUB - 14"<<endl;
cout<<"STOKE CITY FOOTBALL CLUB - 15"<<endl;
cout<<"SUNDERLAND FOOTBALL CLUB - 16"<<endl;
cout<<"TOTTENHAM HOTSPUR FOOTBALL CLUB - 17"<<endl;
cout<<"WEST BROMWICH ALBION FOOTBALL CLUB - 18"<<endl;
cout<<"WEST HAM FOOTBALL CLUB - 19"<<endl;
cout<<"WIGAN FOOTBALL CLUB - 20"<<endl;
cout<<"Choose the numbers of one of these teams: ";
cin>>a;
switch(a)
{
case 1:cout<<"ARSENE WENGER";break;
case 2:cout<<"MARTIN O'NEILL";break;
case 3:cout<<"SAM ALLARDYCE";break;
case 4:cout<<"GREG MEGSON";break;
case 5:cout<<"LUIZ FELIPE SCOLARI";break;
case 6:cout<<"DAVID MOYES";break;
case 7:cout<<"ROY HODGSON";break;
case 8:cout<<"PHILIP BROWN";break;
case 9:cout<<"RAFAEL BENITEZ";break;
case 10:cout<<"MARK HUGHES";break;
case 11:cout<<"SIR ALEX FERGUSON";break;
case 12:cout<<"GARETH SOUTHGATE";break;
case 13:cout<<"JOE KINNEAR";break;
case 14:cout<<"TONY ADAMS";break;
case 15:cout<<"TONY PULIS";break;
case 16:cout<<"RICKY SBRAGIA";break;
case 17:cout<<"HARRY REDKNAPP";break;
case 18:cout<<"TONY MOWBRAY";break;
case 19:cout<<"GIANFRANCO ZOLA";break;
case 20:cout<<"STEVE BRUCE";break;
default:cout<<"CHOOSE ONLY NUMBERS FROM THE LIST";
}
getch();
}
