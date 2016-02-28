#include <iostream.h>
#include <conio.h>
#include <process.h>
void main()
{
clrscr();
char ch;
double num,call,rate;
do
{
cout<<"Enter phone number: ";
cin>>num;
cout<<"Enter number of calls: ";
cin>>call;
if (call<=100&&call>0)
{
rate=0;
}
else
if (call<=250)
{
rate=(call-100)*0.5;
}
else
if (call<=500)
{
rate=75+(call-250)*1;
}
else
if (call<=1000)
{
rate=225+(call-500)*2;
}
else
if (call>1000)
{
rate=1225+(call-1000)*2.5;
}
else
{
cout<<"Invalid number of calls.";
}
cout<<"The rate for phone number "<<num<<" is Rs."<<rate<<endl;
cout<<"\n"<<endl;
cout<<"Enter 'e' to exit or 'c' to continue: ";
cin>>ch;
cout<<"\n"<<endl;
}while(ch!='e'&&ch!='E');
exit(0);
getch();
}
