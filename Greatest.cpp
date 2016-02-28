#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float a,b,c;
cout<<"Enter first number: ";
cin>>a;
cout<<"Enter second number: ";
cin>>b;
cout<<"Enter third number: ";
cin>>c;
(a<b)||(a<c)?((b>a&&b>c)?cout<<"The greatest number is "<<b:cout<<"The greatest number is "<<c):cout<<"The greatest number is "<<a;
getch();
}
