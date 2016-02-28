#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float a,x,ct=0,sum=0;
cout<<"Enter zero to stop calculating the average.\n"<<endl;
cout<<"Enter number 1: ";
cin>>a;
x=a;
sum=sum+x;
for (int i = 1; x != 0; i++)
{
cout<<"Enter number "<<i+1<<": ";
cin>>x;
sum=sum+x;
ct++;
}
cout<<"Average is "<<sum<<"/"<<ct<<" = "<<sum/ct;
getch();
}
