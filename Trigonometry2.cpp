#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
float r,a;
int b,x,y,w,z,n=236;
char m=n;
cout<<"TRIGONOMETRIC CALCULATOR"<<endl;
cout<<"Enter Angle in Degrees: ";
cin>>r;
a=(r*22)/(180*7);
cout<<"1 - sine"<<endl;
cout<<"2 - cosine"<<endl;
cout<<"3 - tangent"<<endl;
cout<<"4 - cosecant"<<endl;
cout<<"5 - secant"<<endl;
cout<<"6 - cotangent"<<endl;
cout<<"Enter Choice: ";
cin>>b;
switch (b)
{
case 1:cout<<sin(a)<<endl;
break;
case 2:cout<<cos(a)<<endl;
break;
case 3:{
for (int j=1;j<=10000000;j++)
{
if (r==90*j)
{
x=0;
break;
}
}
if (x==0)
{
cout<<m<<" = Infinity";
}
else
cout<<tan(a)<<endl;
}
break;
case 4:{
if (r==0)
{
y=0;
break;
}
if (y==0)
{
cout<<m<<" = Infinity";
}
else
cout<<1/sin(a);
}
break;
case 5:{
for (int i=1;i<=10000000;i++)
if (r==90*i)
{
z=0;
break;
}
if (z==0)
{
cout<<m<<" = Infinity";
}
else
cout<<1/cos(a);
}
break;
case 6:{
if (r==0)
{
w=0;
break;
}
if (w==0)
{
cout<<m<<" = Infinity";
}
else
cout<<1/tan(a);
}
break;
default:cout<<"Type only choices from 1-6."; 
}
getch();
}
