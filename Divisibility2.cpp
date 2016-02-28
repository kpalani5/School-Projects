#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int a,b;
cout<<"Enter Dividend: ";
cin>>a;
cout<<"Enter Divisor: ";
cin>>b;
if (b==0)
{
cout<<"Division by zero is not possible";
}
else
{
if (a%b==0)
{
cout<<a<<" is divisible by "<<b<<".";
}
else
cout<<a<<" is not divisible by "<<b<<".";
}
getch();
}
