#include <iostream.h>
#include <conio.h>
#include <math.h>
double slope(double x1,double x2,double y1,double y2)
{
if (x2-x1==0)
{
return 0;
}
else
{
double s=(y2-y1)/(x2-x1);
return s;
}
}
void main()
{
clrscr();
double a1,a2,b1,b2,c1,c2,m1,m2;
cout<<"a1x + b1y + c1 = 0: "<<endl;
cout<<"a1: ";
cin>>a1;
cout<<"b1: ";
cin>>b1;
cout<<"c1: ";
cin>>c1;
cout<<endl;
cout<<"a2x + b2y + c2 = 0: "<<endl;
cout<<"a2: ";
cin>>a2;
cout<<"b2: ";      
cin>>b2;
cout<<"c2: ";
cin>>c2;
cout<<endl;
if ((c1==0||c2==0)&&a1!=0&&a2!=0)
{
m1=-b1/a1;
m2=-b2/a2;
}
else
if (a1==0) 
{
m1=0;
}
else
if (a2==0)
{
m2=0;
}
else
{
m1=slope(-a1/c1,0,0,-b1/c1);
m2=slope(-a2/c2,0,0,-b2/c2);
}
if (m1==m2)
{
cout<<"Parallel Lines";
}
else
if (m1*m2==-1)
{
cout<<"Perpendicular Lines";
}
else
{
cout<<"Angle between lines is : ";
cout<<atan((m1-m2)/(1+m1*m2));
}
getch();
}
