#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
double p,r,t,com=0;
cout<<"Enter amount: ";
cin>>p;
cout<<"Enter rate of interest: ";
cin>>r;
cout<<"Enter number of years: ";
cin>>t;
for (int i = 1; i <= (int)t; i++)
{
com=com+p*r*t/100;
}
cout<<"The compound interest is: "<<com<<endl;
cout<<"The total rate after interst is: ";
cout<<com+p;
getch();
}
