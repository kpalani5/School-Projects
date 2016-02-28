#include <iostream.h>
#include <conio.h>
double slope(double x1,double y1,double x2,double y2)
{
double m=(y2-y1)/(x2-x1);
return m;
}
void main()
{
clrscr();
double x1,y1,x2,y2;
cout<<"Enter x-coordinate of first point: ";
cin>>x1;
cout<<"Enter y-coordinate of first point: ";
cin>>y1;
cout<<endl;
cout<<"Enter x-coordinate of second point: ";
cin>>x2;
cout<<"Enter y-coordinate of second point: ";
cin>>y2;
cout<<endl;
if (x1==x2&&y1==y2)
{
cout<<"Invalid";
}
else
if (x1==x2)
{
cout<<"x = "<<x1;
}
else
if (y1==y2)
{
cout<<"y = "<<y1;
}
else
{
double m=slope(x1,y1,x2,y2);
cout<<"Equation is: \n";
cout<<"y - ("<<m<<")x = "<<y1-(m*x1);
}
getch();
}
