#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float a,b,c;
cout<<"                          SIMPLE INTEREST CALCULATOR"<<endl;
cout<<"Type the pricipal amount, time and rate of interest to find the simple interest."<<endl;
cout<<"Principal Amount(in Rs.):";
cin>>a;
cout<<" "<<endl;
cout<<"Time(in Years):";
cin>>b;
cout<<" "<<endl;
cout<<"Rate(in Percentage):";
cin>>c;
cout<<" "<<endl;
cout<<"Simple interest is equal to Rs."<<(a*b*c)/100;
getch();
}

