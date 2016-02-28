#include <iostream.h>
#include <conio.h>
void main()
{                                                                        
clrscr();
double a,b;
cout<<"                  		 DISCOUNT CALCULATOR"<<endl;
cout<<"Give the cost: ";
cin>>a;
cout<<"Give the rate of discount: ";
cin>>b;
double x=(a*b);
double y=x/100;
cout<<"The cost after discount is Rs "<<a-y<<endl;
double z=(a-y);
double p=(a-z);
cout<<"The money saved after discount is Rs "<<p;
getch();
}

