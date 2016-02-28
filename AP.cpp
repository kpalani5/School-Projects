#include <iostream.h>
#include <conio.h>
void main()
{
int i,a,b,c;
clrscr();
cout<<"ARITHMETIC PROGRESSION CALCULATOR"<<"\n";
cout<<"Enter any number as the first number."<<"\n";
cout<<"The limit should be greater than the first number."<<"\n";
cout<<"Enter First Number: ";
cin>>b;
cout<<"Enter Limit: ";
cin>>a;
cout<<"Enter the difference between two consecutive numbers: ";
cin>>c;
for (i = b; i <= a; i=i+c)
{
 cout<<i<<"\n";
}
cout<<"Difference between two consecutive numbers(d)="<<c<<"\n";
cout<<"First Number(a)="<<b<<"\n";
cout<<"Last Number(l)="<<a<<"\n";
getch();
}
