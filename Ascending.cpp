#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float a,b,c;
cout<<"Give first number: \n";
cin>>a;
cout<<"Give second number: \n";
cin>>b;
cout<<"Give third number: \n";
cin>>c;
if ((a>=b)&&(a>=c)&&(b>=c))
 cout<<"The ascending order is "<<c<<" , "<<b<<" , "<<a;
else
 if ((a>=b)&&(a>=c)&&(c>=b))
  cout<<"The ascending order is "<<b<<" , "<<c<<" , "<<a;
 else
  if ((b>=a)&&(b>=c)&&(a>=c))
   cout<<"The ascending order is "<<c<<" , "<<a<<" , "<<b;
  else
   if ((b>=a)&&(b>=c)&&(c>=a))
	cout<<"The ascending order is "<<a<<" , "<<c<<" , "<<b;
   else
	if ((c>=a)&&(c>=b)&&(a>=b))
	 cout<<"The ascending order is "<<b<<" , "<<a<<" , "<<c;
	else
	 if ((c>=a)&&(c>=b)&&(b>=a))
	  cout<<"The ascending order is "<<a<<" , "<<b<<" , "<<c;
getch();
}
