#include <iostream.h>
#include <conio.h>
double n1(long n)
{
double sum=n*(n+1)/2;
return sum;
}
double n2(long n)
{
double sum=n*(n+1)*((2*n)+1)/6;
return sum;
}
double n3(long n)
{
double sum=(n*(n+1)/2)*(n*(n+1)/2);
return sum;
}
void main()
{
clrscr();
long ch,n;
cout<<"                     SERIES"<<endl;
cout<<"Series 1 - 1+2+3+..............+n"<<endl;
cout<<"Series 2 - (1x1)+(2x2)+(3x3)+..............+(nxn)"<<endl;
cout<<"Series 3 - (1x1x1)+(2x2x2)+(3x3x3)+..............+(nxnxn)"<<endl;
cout<<"Enter choice (1,2 or 3) : ";
cin>>ch;
cout<<"Enter last term : ";
cin>>n;
switch (ch)
{
case 1:cout<<"The sum is "<<n1(n);break;
case 2:cout<<"The sum is "<<n2(n);break;
case 3:cout<<"The sum is "<<n3(n);break;
default:cout<<"INVALID CHOICE";
}
getch();
}
