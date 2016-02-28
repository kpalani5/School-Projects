#include <iostream.h>
#include <conio.h>
void main()
{
int a;
clrscr();
cout<<"CAPTAINS OF THE INDIAN PREMIER LEAGUE"<<endl;
cout<<"IPL TEAMS ARE:"<<endl;
cout<<"RAJASTHAN ROYALS - 1"<<endl;
cout<<"CHENNAI SUPER KINGS - 2"<<endl;
cout<<"KINGS XI PUNJAB - 3"<<endl;
cout<<"DELHI DAREDEVILS - 4"<<endl;
cout<<"MUMBAI INDIANS - 5"<<endl;
cout<<"KOLKATA KNIGHT RIDERS - 6"<<endl;
cout<<"BANGALORE ROYAL CHALLENGERS - 7"<<endl;
cout<<"DECCAN CHARGERS - 8"<<endl;
cout<<"Choose from one of these numbers: ";
cin>>a;
switch(a)
{
case 1:cout<<"SHANE WARNE";break;
case 2:cout<<"MAHENDRA SINGH DHONI";break;
case 3:cout<<"YUVRAJ SINGH";break;
case 4:cout<<"VIRENDER SEHWAG";break;
case 5:cout<<"SACHIN TENDULKAR";break;
case 6:cout<<"SAURAV GANGULY";break;
case 7:cout<<"RAHUL DRAVID";break;
case 8:cout<<"VANGIPARAPPU VENKATA SAI LAXMAN";break;
default:cout<<"CHOOSE NUMBERS ONLY FROM 1-8";
}
getch();
}
