#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
float a;
float b;
cout<<"Give the base: ";
cin>>a;
cout<<"Give the exponent: ";
cin>>b;
cout<<a<<" to the power of "<<b<<" is ";
cout<<pow(a,b)<<".";
getch();
}
