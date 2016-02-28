#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,dgt,ct=0,sum=0;
cout<<"Enter a positive integer: ";
cin>>n;
cout<<"The digits are: "<<endl;
for (int i = n; i != 0; i=i/10)
{
dgt=i%10;
cout<<dgt<<endl;
ct++;
sum=sum+dgt;
}
cout<<"Sum of the digits is "<<sum<<endl;
cout<<"Number of digits is "<<ct<<endl;
getch();
}
