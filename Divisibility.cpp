#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
double a,x;
cout<<"Enter a Number: ";
cin>>a;
for (double i = 1.0; i <= a; i=i+1.0)
{
if (double(a==i*23.0))
{
x=a;
break;
}
}
if (x==a)
cout<<a<<" is a multiple of 23.";
else
cout<<a<<" is not a multiple of 23.";
getch();
}
