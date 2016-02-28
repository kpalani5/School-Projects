#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <process.h>
void main()
{
clrscr();
int i,j,ct,ch;
float n,dgt,sum,rev;
do                  
{
cout<<"1) Binary to Decimal \n";
cout<<"2) Decimal to Binary \n";
cout<<"3) Octal to Decimal \n";
cout<<"4) Decimal to Octal \n";
cout<<"5) Exit \n";
cout<<"Enter your choice: ";
cin>>ch;
cout<<endl;
ct=0;
sum=0;
switch (ch)
{
case 1:
{
int flag1=0;
cout<<"Enter binary number: ";
cin>>n;
cout<<endl;
for (i = n; i != 0; i=i/10)
{
dgt=i%10;
if (dgt==0||dgt==1) 
{
ct++;
sum=sum+(dgt*(pow(2,ct-1)));
}
else
{
cout<<"Invalid Binary Number.";
flag1=1;
break;
}
}
if (flag1==0) 	
{
cout<<"Decimal number is "<<sum;
}
}
break;
case 2:
{
cout<<"Enter decimal number: ";
cin>>n;
cout<<endl;
cout<<"Binary number is ";
for (i = n; i != 0; i=i/2)
{
dgt=i%2;
ct++;
sum=sum+(dgt*(pow(10,ct-1)));
}
cout<<sum;
}
break;
case 3:
{
int flag2=0;
cout<<"Enter octal number: ";
cin>>n;
cout<<endl;
for (i = n; i != 0; i=i/10)
{
dgt=i%10;
if (dgt>=0&&dgt<=7) 
{	
ct++;
sum=sum+(dgt*(pow(8,ct-1)));
}
else
{
cout<<"Invalid Octal Number.";
flag2=1;
break;
}
}
if (flag2==0) 
{
cout<<"Decimal number is "<<sum;
}
}
break;
case 4:
{
cout<<"Enter decimal number: ";
cin>>n;
cout<<endl;
for (i = n; i != 0; i=i/8)
{
dgt=i%8;
ct++;
sum=sum+(dgt*(pow(10,ct-1)));
}
cout<<"Octal number is "<<sum;
}
break;
case 5: ;break;
default:cout<<"Invalid";break;
}
cout<<"\n"<<endl;
}while(ch!=5);
exit(0);
getch();
}
