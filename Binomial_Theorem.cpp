#include <iostream.h>
#include <conio.h>
#include <karthik.h>
void main()
{
clrscr();
int _,i;
cout<<"Enter the power: ";
cin>>_;
cout<<endl;
cout<<"(a+b)^"<<_<<" = "<<endl;
cout<<endl;
for (i = 0; i <= _; i++)
{
cout<<combination(_,i)<<" x a^"<<_-i<<" x b^"<<i;
if (i<_)
{
cout<<" + ";
}
cout<<endl;
}
getch();
}
